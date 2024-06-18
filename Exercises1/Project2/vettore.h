#if !defined VETTORE_H
#define VETTORE_H

#include "elemtype.h"

typedef struct {
    size_t capacity;
    size_t size;
    ElemType* data;
} Vector;

void VectorSort(Vector* v);
#endif // !defined VETTORE_H
