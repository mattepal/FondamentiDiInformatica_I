#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


void scrivi_v(FILE* f, uint8_t n) {
	for (uint8_t r = 1; r <= n; r++)
	{
		for (uint8_t c = 1; c <= n * 2; c++) {
			if (r == c) {
				fprintf(f, "\\");
			}
			if ((c + r) == n*2) {
				fprintf(f, "/\n");
				
			}
			if((c + r) < n * 2)
				fprintf(f, " ");
		}
	}

}
int main(void) {
	uint8_t n = 4;
	FILE* f = fopen("prova.txt","w");
	scrivi_v(f, n);
	return 0;
}
