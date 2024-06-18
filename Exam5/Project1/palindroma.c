#include "palindroma.h"

bool palindroma(const char* str)
{
	size_t lung = strlen(str);
	int b=strcmp(str, "");
	if (str == NULL || b==0) {
		return false;
	}
	if (lung == 1) { 
		return true;
	}
	size_t tmp = lung;
	unsigned int count = 0;
	for (size_t i = 0; i < lung; i++, lung--) {
		if (str[i] == str[lung - 1])
			count++;
	}
	if (tmp % 2 == 0) {
		if (count == (tmp / 2)) {
			return true;
		}
	}
	if (tmp%2!=0) {
		if (count == (tmp / 2)+1) {
			return true;
		}
	}
	return false;
}
