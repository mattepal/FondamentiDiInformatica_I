#include "matrix.h"

void mat_symdecomp(const struct matrix* m,struct matrix* S,struct matrix* A)
{
	if (m->cols != m->rows) {
		return;
	}
	if (m == NULL || S==NULL || A==NULL) { 
		return; 
	}
	S->rows = m->rows;
	A->rows = m->rows;
	S->cols = m->cols;
	A->cols = m->cols;
	S->data = calloc(S->rows * S->cols, sizeof(double));
	A->data = calloc(A->rows * A->cols, sizeof(double));
	for (size_t r = 0; r < m->rows; r++)
	{
		for (size_t c = 0; c < m->cols; c++)
		{
			S->data[r * m->cols + c] = (m->data[r*m->cols+c] + m->data[c*m->rows+r]) / 2;
			A->data[r * m->cols + c] = (m->data[r * m->cols + c] - m->data[c * m->rows + r]) / 2;
		}
	}
	return;
}
