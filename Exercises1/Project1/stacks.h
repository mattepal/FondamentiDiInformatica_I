#if !defined STACK_H
#define STACK_H

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
    unsigned* elements;
    size_t m;
} Stack;

unsigned MaxSumNStack(Stack* stacks, size_t n);

#endif // !defined STACK_H
