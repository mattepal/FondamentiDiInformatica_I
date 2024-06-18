#define _NO_CRT_SECURE_WARNINGS
#if !defined WTK_H
#define WTK_H

#include <stdint.h>
#include <stdio.h>

struct point {
    double x, y;
};
size_t write_points(FILE* f, const struct point* p, size_t n);
#endif // !defined WTK_H
