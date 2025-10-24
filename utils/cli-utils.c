#include "cli-utils.h"
#include <stddef.h>
#include <stdio.h>

void line(char* line_type, unsigned int line_size) {
	if (line_type == NULL || line_size == 0) {
		printf("Parameter line_type can't be NULL\nParameter size can't be 0");
		return;
	}

	for(size_t i = 0; i < line_size; i++) {
		printf("%s", line_type);
	}

	printf("%s\n", line_type);
}