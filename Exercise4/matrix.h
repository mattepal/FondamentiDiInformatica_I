#define _CRT_SECURE_NO_WARNINGS
#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* mat_normalize_rows(const struct matrix* m);
#endif // 0

