#include "health.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* server_status() {
	char* command = malloc(100);
	int status = 0;

	sprintf(command, "ping -c 1 8.8.8.8 > /dev/null 2>&1");
	status = system(command);

	if(status == 0) {
		return "\033[92mOnline\033[0m\n";
		free(command);
	}

	free(command);
	return "\033[91mDown or unreachable\033[0m\n";
}

void disk_status() {
	FILE* hi_mom;
	char* cli = malloc(256);
	char* buffer = malloc(256);
	sprintf(cli, "for disk in $(lsblk -d -o NAME); do smartctl -H /dev/$disk | awk -v disk=$disk '/SMART overall-health/ {split($0, a, \":\"); gsub(/^ */, \"\", a[2]); if (a[2] ~ /PASSED/ ) a[2]=\"Healthy\"; print disk\": \"a[2]}'; done");
	hi_mom = popen(cli, "r");

	if(hi_mom == NULL) {
		printf("Error during program execution: %s", strerror(errno));
		free(cli);
		free(buffer);
		return;
	}

	while(fgets(buffer, 256, hi_mom) != NULL) {
		printf("%s", buffer);
	}

	pclose(hi_mom);
	free(cli);
	free(buffer);
}