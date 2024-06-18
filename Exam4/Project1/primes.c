#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	if (argc != 2) {
		return 1;
	}
	int cnt = 1,c=0;
	if (atoi(argv[1]) == 0)
		return 0;
	while (cnt != atoi(argv[1])) {
		c = 0;
		for (int i = 1; i <= cnt; i++)
		{
			if (cnt % i == 0) {
				c = c + 1;
			}
		}
		if (c == 2) {
			printf("%d ", cnt);
		}
		cnt = cnt + 1;
	}
	printf("\n");
	return 0;
}