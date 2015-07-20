#include <stdio.h>
#include <stdbool.h>

#define DEBUG true
#define FILENAME "file.jar"

const char jar[] = { /* array */ };

int main(void) {
	FILE *file = fopen(FILENAME, "w");

	int results = fputs(jar, file);

	fclose(file);

	return results;
}
