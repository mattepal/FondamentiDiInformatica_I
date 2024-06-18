#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int* read_gruppi(const char* filename, size_t* ngruppi) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	*ngruppi = 0;
	int* q = calloc(1,sizeof(int));
	int valore,somma=0;
	char numeri[51] = {0};
	while (feof(f) == 0) {
		fgets(numeri, 50, f);
		if (numeri == '\n') {
			q[*ngruppi] = somma;
			somma = 0;
			ngruppi+=1;
			q=realloc(q, (* ngruppi + 1) * sizeof(int));
		}
		else{
			valore = atoi(numeri);
			somma = somma + valore;
		}

	}
	if (somma != 0) {
		q[*ngruppi] =somma ;
		*ngruppi += 1;
	}
	q = realloc(q, *ngruppi * sizeof(int));
	fclose(f);
	return q;
}