#include <stdbool.h>
#include <stdint.h>

bool goldbach(uint32_t n, uint32_t* p1, uint32_t* p2) {
	if (n % 2 != 0 || n < 2) {
		return false;
	}
	
}