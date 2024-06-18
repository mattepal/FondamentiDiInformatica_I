#include <stdlib.h>

int* convolution3(const int* v, size_t lenv, const int k[3]) {
	if(v==NULL || k==NULL)
		return NULL;
	int* ret = calloc(lenv, sizeof(int));
	for (size_t i = 0; i < lenv; i++)
	{
		if (i == 0) {
			ret[i] = k[0] * v[i+1] + v[i] * k[1];
		}
		else if (i == lenv - 1) {
			ret[i] = v[i] * k[1] + v[i - 1] * k[2];
		}
		else {
			ret[i] = v[i + 1] * k[0] + v[i] * k[1] + v[i - 1] * k[2];
		}
	}
	return ret;
}

//int main() {
//
//}