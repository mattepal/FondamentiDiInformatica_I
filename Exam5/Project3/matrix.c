#include "matrix.h"

struct matrix* matrix_flip_v(const struct matrix* m)
{
	if (m == NULL) {
		return NULL;
	}
	struct matrix* new_matrix=malloc(sizeof*new_matrix);
	new_matrix->rows = m->rows;
	new_matrix->cols = m->cols;
	new_matrix->data = calloc(new_matrix->rows*new_matrix->cols, sizeof(double));
	size_t righe = m->rows-1;
	for(size_t r = 0;r<m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			new_matrix->data[c+r*new_matrix->cols] = m->data[ c+righe*m->cols];
		}
		righe--;
	}
	return new_matrix;
}
