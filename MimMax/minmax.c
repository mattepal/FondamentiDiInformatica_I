#include <stdlib.h>


void minmax(const int* v, size_t n, int* min, int* max) {
	if (n == 0 || v == NULL) {
		return;
	}
	for (size_t i = 0; i < n; i++) {
		if (v[i] > *max) {
			*max=v[i];
		}
		if (v[i ] <*min) {
			*min= v[i];
		}
	}
	return;
}

