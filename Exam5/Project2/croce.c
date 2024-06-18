#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void stampa_croce(FILE* f, size_t dim) {
	if (dim == 0) {
		return;
	}
	for (size_t i = 1; i <= dim*2; i++) {
		for (size_t c = 1; c <= (dim * 2); c++) {
			if (i == c) {
				fprintf(f,"\\");
			}
			if (i + c == (dim*2)+1) {
				fprintf(f,"/\n");
				break;
			}
			else { 
				fprintf(f, " "); }
		}
	}
	for (size_t i = dim; i <= dim*2; i++) {
		for (size_t c = 1; c <= dim * 2; c++) {
			if (i+c== (dim * 2) + 1) {
				fprintf(f,"/");
			}
			if (c-i == 0) {
				fprintf(f,"\\\n");
				break;
			}
			else { 
				fprintf(f, " "); }
		}
	}
}


