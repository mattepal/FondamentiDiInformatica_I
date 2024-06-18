#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>

void print_table(char** colnames, uint8_t ncols, uint8_t nrows) {
	if (ncols == 0 || nrows == 0) {
		return ;
	}
	for (size_t r = 0; r < (int)nrows*2+2; r++) {
		for (size_t c = 0; c < (int)ncols; c++) {
			if(r%2==0){	
				printf("|");
				if (r == 0) {
				printf("%-9s", colnames[c]);
				}
				else {
					printf("         ");
				}
				if (c == (int)ncols - 1) {
					printf("|\n");
				}
			}
			else if (r%2!=0) {
				printf("+---------" );
				if (c == (int)ncols - 1) {
					printf("+\n");
				}
			}
		}
	}
}
//void main() {
//	char* c[] = { "cane","gatto","am","sium" };
//	print_table(c, 4, 3);
//}