#include<stdlib.h>
#include<stdint.h>

extern void raddoppia(uint32_t* x, size_t n) {
	size_t i = 0;
	if (x != NULL) {
		for (n; n !=0; n--) {
			x[i] = x[i] * 2;
			i++;
		}
	}
}

/*int main(void) {
	size_t n = 3;
	uint32_t* v = malloc(n * sizeof(uint32_t));
	v[0]=12;
	v[1]=59;
	v[2]=83;
	raddoppia(v, n);
	free(v);
	return 0;
} 
*/