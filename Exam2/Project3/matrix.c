#include "matrix.h"

struct vector* mat_vectorize(const struct matrix* m,enum vectorize_by dir)
{
	if (m == NULL) {
		return NULL;
	}
	if (dir != BY_ROW && dir != BY_COLUMN) {
		return NULL;
	}
	double *v = calloc(m->rows * m->cols, sizeof(double));
	if (dir == BY_ROW) {
		for (size_t r = 0; r < m->rows; r++) {
			for (size_t c = 0; c < m->cols; c++) {
				v[r * m->cols + c] = m->data[r * m->cols + c];
			}
		}
	}
	if (dir == BY_COLUMN) {
		for (size_t c = 0; c < m->cols; c++) {
			for (size_t r = 0; r < m->rows; r++) {
				v[c*m->rows + r] = m->data[r * m->cols + c];
			}
		}
	}
	struct vector* ret = malloc(sizeof * ret);
	ret->n = m->cols * m->rows;
	ret->data = v;
	return ret;
}
//int main(void) {
//	struct matrix A;
//	A.cols = 3;
//	A.rows = 3;
//	double data[] = { 1,2,3,4,5,6,7,8,9 };
//	A.data = data;
//	struct vector* res = mat_vectorize(&A, BY_ROW);
//	res = mat_vectorize(&A, BY_COLUMN);
//	return 0;
//}
