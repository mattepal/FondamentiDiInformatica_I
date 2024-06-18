#include "vettore.h"

void VectorSort(Vector* v)
{
	if (v==NULL)
		return;
	for (size_t i = 0; i < v->size; i++)
	{
		int pnt = i-1;
		while (ElemCompare(&v->data[i],&v->data[pnt])<0) {
			ElemSwap(&v->data[i], &v->data[pnt]);
			i -= 1;
			pnt -= 1;
		}
	}
	return;
}
