#define _CRT_SECURE_NO_WARNINGS
#if !defined RATIONAL_H
#define RATIONAL_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct rational {
    int num;
    unsigned int den;
};
struct rational* rational_read(const char* filename, size_t* size);
#endif // !defined RATIONAL_H
