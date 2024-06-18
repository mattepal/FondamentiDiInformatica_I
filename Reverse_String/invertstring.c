#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		return 1;
	}
	size_t len = strlen(argv[1]);
	for (int i = 0;i<len;i++) {
		printf("%c", argv[1][len - 1-i]);
	}
	return 0;
}