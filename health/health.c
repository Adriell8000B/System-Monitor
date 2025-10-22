#include "health.h"
#include "general-utils.h"
#include <stdio.h>
#include <stdlib.h>

char* server_status() {
	char* origin = getenv_string("ORIGIN");
	char* command = malloc(100);
	int status = 0;

	sprintf(command, "ping -c 1 %s > /dev/null 2>&1", origin);
	status = system(command);

	if(status == 0) {
		return "\033[92mOnline\033[0m";
	}

	free(command);
	return "\033[91mDown or unreachable\033[0m";
}