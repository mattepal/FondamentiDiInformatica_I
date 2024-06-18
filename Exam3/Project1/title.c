#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc,char* argv[]) {
	for (int i = 1; i < argc; i++) {
		size_t lung = strlen(argv[i]);
		if (isalpha(argv[i][lung-1]) != 0) {
			argv[i][lung-1]=toupper(argv[i][lung - 1]);
		}
		printf("%s", argv[i]);
		if (i != argc - 1)
			printf(" ");
	}
	printf("\n");
	return 0;
}