#include "matrix.h"

 struct matrix* mat_normalize_rows(const struct matrix* m)
{
	 if (m == NULL) {
		 return 0;
	 }
	 struct matrix* new = malloc(sizeof*new);
	 new->rows = m->rows;
	 new->cols = m->cols;
	 new->data = calloc(new->rows * new->cols, sizeof(double));
	 for (size_t r = 0; r < new->rows;r++) {
		 double norma = 0;
		 for (size_t c = 0; c < new->cols;c++) {
			 norma = norma + (double)(pow(m->data[r * new->rows + c],2));
		 }
		 if (norma != 0) {
			 for (size_t c = 0; c < new->cols; c++) {
				 new->data[r * new->rows+c] = m->data[r * new->rows+c] / sqrt(norma);
			 }
		 }
	 }
	 return new;
}
 void main() {
	 struct matrix* m = malloc(sizeof * m);
	 m->rows = 2;
	 m->cols = 3;
	 double arr[] = {1 ,2 , 0, 4  ,5 ,6};
	 m->data = arr;
	 mat_normalize_rows(m);
 }