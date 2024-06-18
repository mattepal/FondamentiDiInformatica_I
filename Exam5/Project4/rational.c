#include "rational.h"

struct rational* rational_read(const char* filename, size_t* size)
{	
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		*size = 0;
		return NULL;
	}
	int c = 0;
	int num,den;
	while (1) { 
		int ret=fscanf(f, "%d / %d", &num,&den);
		if (ret == -1) {
			break;
		}
		if (ret < 2) {
			break;
		}
		else
			c++;
	}
	*size = c;
	if (c == 0) {
		fclose(f);
		return NULL;
	}

	rewind(f);
	struct rational* new = calloc(c,sizeof(struct rational));
	for (int f = 0; f < c; f++) {
		fscanf(f, "%d / %u", &new[f].num, &new[f].den);
	}
	fclose(f);
	return new;
}