#include "WTK.h"

size_t write_points(FILE* f, const struct point* p, size_t n)
{	
	size_t letti = 0;
	if (p == NULL) {
		return letti;
	}
	for (size_t i = 0; i < n; i++) { 
		fprintf(f,"POINT(%g %g)\n", p[i].x, p[i].y); 
		letti++;
	}
	return letti;
}
