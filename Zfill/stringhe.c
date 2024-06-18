#include "stringhe.h"

char* zfill(const char* str, size_t n)
{
	if (str == NULL)
		return NULL;
	size_t l = strlen(str);
	char *m = calloc(1, sizeof(char));
	if (n <= l) { 
		m = realloc(str, l * sizeof(char));
		return m;
	}
	int zeri = n - l;
	int contat = 0;
	m = realloc(m, n * sizeof(char));
	for (size_t i=0; i<n; i++) {
		if (zeri > 0) {
			m[i] = '0';
			zeri--;
		}
		else 
			if (zeri = 0) {
				for (int h = 0; h < l; h++)
				m[i] = str[h];}
	}
	return m;
}
