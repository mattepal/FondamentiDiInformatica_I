#define _NO_SECURE_WARNINGS_CRT
#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};
struct matrix* mat_rotate180(const struct matrix* m);

#endif // !defined MATRIX_H


