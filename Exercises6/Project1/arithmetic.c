#include <stdbool.h>
#include <stdlib.h>

bool is_arithmetic(const int* v, size_t n) {
	if (n < 2)
		return false;
	else if (n == 2) {
		return true;
	}
	else {
		int diff = v[0]-v[1];
		for (size_t i = 1; i < n; i++)
		{
			if (v[i - 1] - v[i] != diff) {
				return false;
			}
		}
		return true;
	}
}

//bool main() {
//	int v[] = {10,9,8};
//	size_t n = 3;
//	return is_arithmetic(&v, n);
//}