#define _CTR_SECURE_NO_WARNINGS

#if !defined PUNTI_IN_CERCHIO_H
#define PUNTI_IN_CERCHIO_H

#include <stdlib.h>
#include <math.h>

struct punto {
    double x, y;
};
 struct punto *punti_in_cerchio(const struct punto *p, size_t n, double r, size_t *count);


#endif
