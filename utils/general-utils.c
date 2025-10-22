#include "general-utils.h"
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getenv_string(const char* env) {
	char* ENV = getenv(env);

	if(ENV == NULL) {
		printf("Error loading env: %s: %s\n", env, strerror(errno));
		return "";
	}

	return ENV;
}