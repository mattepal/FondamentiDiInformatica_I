#include <stdlib.h>

int* slicing(const int* v, size_t* n, size_t start, size_t end, int step) {
	int size = 1;
	int* new = calloc(size,sizeof(int));
	if (step > 0) {
		size_t i = 0;
			while(start<end) {
			new[i] = v[start];
			new = realloc(new,size+1* sizeof(int));
			start = start + step;
			i++;
		}
	}
	if (step < 0) {
		size_t i = 0;
		while(end>start) {
			new[i] = v[end];
			new = realloc(new, size + 1 * sizeof(int));
			end = end + step;
			i++;
		}
	}
	new = realloc(new, size * sizeof(int));
	return new;
}