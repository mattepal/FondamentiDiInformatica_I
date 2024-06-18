#include "matrix.h"

struct matrix* mat_rotate180(const struct matrix* m)
{
	if (m == NULL) {
		return NULL;
	}

	struct matrix* new=malloc(sizeof*new);
	new->rows = m->rows;
	new->cols = m->cols;
	new->data = calloc(new->rows * new->cols, sizeof(double));

	/*
	int dati = m->rows * m->cols;
	int tmp = dati;
	for (int i = 0; i < dati; i++) {
		new->data[i] = m->data[tmp];
		tmp--;
	}
	*/
	int dato = m->rows * m->cols;
	for (size_t r = 0; r <m->rows; r++) {
		for (size_t c = 0; c <m->cols; c++) {
			new->data[c+r*m->cols] = m->data[dato-1];
			dato--;
		}
	}
	return new;
}


