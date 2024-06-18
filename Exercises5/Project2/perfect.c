#include <stdbool.h>
#include <stdint.h>

bool is_perfect(uint32_t n) {
	uint32_t tmp = n;
	int div = 1,summ=0;
	if (n == 0)
		return false;
	while (tmp != div) {
		if (tmp % div==0) {
			summ += div;
		}
		div = div + 1;
	}
	if (n == summ) {
		return true;
	}
	else
		return false;
}

//bool main() {
//	uint32_t i = 6;
//	return is_perfect(i);
//}