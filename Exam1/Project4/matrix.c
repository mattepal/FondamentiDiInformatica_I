#include "matrix.h"

struct matrix* mat_scale(const struct matrix* m, double x)
{
	struct matrix* new = malloc(sizeof * new);
	new->cols = m->cols;
	new->rows = m->rows;
	new->data = calloc(new->rows * new->cols, sizeof(double));
	for (size_t r = 0; r < new->rows; r++) {
		for (size_t c = 0; c < new->cols; c++){
			new->data[r * new->cols + c] = x * m->data[r * m->cols + c];
		}
	}
	return new;
}
//void main() {
//	struct matrix* m = malloc(sizeof * m);
//	m->rows = 3;
//	m->cols = 1;
//	double data[] = { 1,3,7 };
//	m->data = data;
//	struct matrix *new=mat_scale(m, 7);
//	free(m);
//	free(new);
//}