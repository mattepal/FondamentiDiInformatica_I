#include "getline.h"

size_t getline(char** lineptr, size_t* n, FILE* stream)
{
	if (*lineptr == NULL || *n < 16) {
		*n = 16;
	}

}
