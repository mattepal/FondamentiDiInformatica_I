#include "finance.h"

struct value* read_historical_series(const char* filename, size_t* n)
{
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	int righe=0;
	while (fscanf(f, "\n") == 1) {
		righe = righe + 1;
	}
	fclose(f);
}
