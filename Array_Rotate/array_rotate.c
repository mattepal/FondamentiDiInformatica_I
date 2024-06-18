#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

int* rotate(const int* vec, size_t len, size_t r) {
	int *new_vec;
	if (r == 1) {
		new_vec = vec;
		return new_vec;
	}
	while (r > 0) {
		new_vec[0] = vec[len - 1];
		for (int i = 0; i < len; ++i) {
			int h = vec[i];
			new_vec[i] = vec[i - 1];
		}
		new_vec[0] = vec[len-1];
	}
}

