#include "cli-utils.h"
#include <stddef.h>
#include <stdio.h>

void separator(char* separator_type, unsigned int separator_size) {
	if (separator_type == NULL || separator_size == 0) {
		printf("Parameter separator_type can't be NULL\nParameter size can't be 0");
		return;
	}

	for(size_t i = 0; i < separator_size; i++) {
		printf("%s", separator_type);
	}

	printf("%s\n", separator_type);
}