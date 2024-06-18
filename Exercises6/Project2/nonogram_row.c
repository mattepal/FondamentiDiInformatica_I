#include <stdint.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

uint8_t* nonogram_row(const char* s, size_t* n) {
	if (s == NULL) {
		return NULL;
	}
	*n = 0;
	uint8_t* v = calloc(*n+1, sizeof(uint8_t));
	int c = 0;
	for (size_t i = 0; i < strlen(s); i++)
	{
		if (isspace(s[i]) == 0) {
			v[c] = v[c] + 1;
		}
		else if (i == strlen(s) - 1)
			break;
		else if(isspace(s[i]) != 0 && isspace(s[i + 1]) == 0) {
			*n = *n + 1;
			c = c + 1;
			*v=realloc(v,(*n + 1) * sizeof(uint8_t));
		}
	}
	return v;
}

//int main() {
//	char s="* *** ***";
//	size_t n = 0;
//	nonogram_row(&s, &n);
//}