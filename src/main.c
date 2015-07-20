#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

#define DEBUG true
#define FILENAME "file.jar"

const char jar[] = { /* array */ };

int main(void) {
	FILE *file = fopen(FILENAME, "w");

	int results = fputs(jar, file);

	fclose(file);

	char command[32];
	strcpy(command, "java -jar ");
	strcat(command, FILENAME);

	system(command);

	return results;
}
