#include "cli-utils.h"
#include <stddef.h>
#include <stdio.h>

void line(char* type, unsigned int size) {
	if (type == NULL || size == 0) {
		printf("Parameter type can't be NULL\nParameter size can't be 0");
		return;
	}

	for(size_t i = 0; i < size; i++) {
		printf("%s", type);
	}

	printf("%s\n", type);
}

void menu() {
	char* options[4] = {
		"[1] ",
		"[2] hey",
		"[3] hiy",
		"[4] hoy"
	};

	for(size_t i = 0; i < 4; i++) {
		printf("%s\n", options[i]);
	}
}