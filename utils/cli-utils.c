#include "cli-utils.h"
#include <stddef.h>
#include <stdio.h>

void line(char* linet_type, unsigned int line_size) {
	if (linet_type == NULL || line_size == 0) {
		printf("Parameter linet_type can't be NULL\nParameter size can't be 0");
		return;
	}

	for(size_t i = 0; i < line_size; i++) {
		printf("%s", linet_type);
	}

	printf("%s\n", linet_type);
}