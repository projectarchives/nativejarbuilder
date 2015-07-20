#include <stdio.h>
#include <stdbool.h>

#define DEBUG true

const char jar[] = { /* array */ };

int main(void) {
	FILE *file = fopen("file.jar", "w");

	int results = fputs(jar, file);

	fclose(file);

	return results;
}
