#define _NO_SECURE_WARNINGS_CRT
#if !defined GETLINE_h
#define GETLINE_H

#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>

size_t getline(char** lineptr, size_t* n, FILE* stream);

#endif // !defined GETLINE_h
