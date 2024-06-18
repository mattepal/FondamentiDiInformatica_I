#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

bool cifre_duplicate_hex(unsigned int n) {
	unsigned int *base=calloc(1,sizeof(unsigned int));
	int i=0;
	while (n !=0 ) {
		base[i]=n % 16;
		i++;
		n=n / 16;
		base = realloc(base, (i + 1) * sizeof(int));
	}
	base = realloc(base,i*sizeof(int));
	int v , cont=0;
	for (int c = 0; c < i; c++) {
		for (v = 0; v < c; v++) {
			if (base[v] == base[c])
				cont++;
		}
	}
	free(base);
	if (cont > 1)
		return true;
	else return false;
}