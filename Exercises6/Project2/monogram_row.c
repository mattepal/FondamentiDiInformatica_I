#include <stdint.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

uint8_t* nonogram_row(const char* s, size_t* n) {
	if (s == NULL) {
		return NULL;
	}
	*n = 0;
	int num = (int)*n;
	uint8_t* v = calloc(num+1, sizeof(uint8_t));
	int c = 0;
	for (size_t i = 0; i < strlen(s); i++)
	{
		if (isspace(s[i]) == 0) {
			v[c] += 1;
		}
		else if (i == strlen(s) - 1)
			break;
		else if(isspace(s[i]) != 0 && isspace(s[i + 1]) == 0) {
			num=num+1;
			c = c + 1;
			*v=realloc(v,( num + 1) * sizeof(uint8_t));
		}
	}
	*n = num;
	return v;
}

int main() {
	char *s="* *** ***";
	size_t n = 0;
	nonogram_row(s, &n);
}