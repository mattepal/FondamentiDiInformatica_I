#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	FILE *f=fopen(argv[1], "r");
	if (f == NULL) {
		return 1;
	}
	while ((feof(f)) == 0) {
		char c = fgetc(f);
		if (c>255) {
			break;
		}
		if (isupper(c) == 1) {
			c = tolower(c);
		}
		printf("%c", c);

	}
	fclose(f);
	return 0;
}