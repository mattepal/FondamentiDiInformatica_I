#include<stdlib.h>
#include<stdint.h>

void iota(uint32_t *x, size_t n) {
	size_t i = 0;
	if (x != NULL) {
		for (n; n != 0;n--) {
			x[i] = i;
			i++;
		}
	}
}