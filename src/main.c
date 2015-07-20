#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define DEBUG true
#define FILENAME "file.jar"

const char jar[] = { /* array */ };

int main(void) {
	FILE *file = fopen(FILENAME, "w");

	int results = fputs(jar, file);

	fclose(file);

	char* command = "java -jar ";
	strcat(command, FILENAME);

	system(command);

	return results;
}
