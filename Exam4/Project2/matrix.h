#define _CRT_SECURE_NO_WARNINGS
#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

void mat_symdecomp(const struct matrix* m, struct matrix* S, struct matrix* A);

#endif // !defined 
