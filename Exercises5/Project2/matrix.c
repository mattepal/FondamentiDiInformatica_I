#include "matrix.h"

bool scalar_mult(struct matrix* dst, const struct matrix* src, double k, bool accumulate)
{
	if (dst == NULL || src == NULL || src->cols != dst->cols || src->rows != dst->rows)
		return false;
	if (accumulate == false) {
		for (size_t r = 0; r < src->rows; r++)
		{
			for (size_t c = 0; c < src->cols; c++) {
				dst->data[r * src->cols + c] = k * src->data[r * src->cols + c];
			}
		}
	}
	else {
		for (size_t r = 0; r < src->rows; r++)
		{
			for (size_t c = 0; c < src->cols; c++) {
				dst->data[r * src->cols + c] =dst->data[r*src->cols+c]+( k * src->data[r * src->cols + c]);
			}
		}
	}
	return true;
}
