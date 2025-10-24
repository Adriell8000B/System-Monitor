#include "app.h"
#include "cli-utils.h"
#include "health.h"
#include <stdio.h>
#include <unistd.h>

void start() {
	while (1) {
		separator("-=", 15);
		printf("Server status: %s", server_status());
		disk_status();
		sleep(1);
	}
}