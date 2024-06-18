#include <stdlib.h>
#include <string.h>

int* rotate(const int* vec, size_t len, size_t r) {
	if (vec == NULL )
		return NULL;
	int* new = calloc(len, sizeof(int));
	r = r % len;
	for (size_t i = 0; i < len; i++) {
		new[(i + r) % len] = vec[i];
	}
	return new;
}
