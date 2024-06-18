#include "list.h"
#include <string.h>

const ElemType* Find(const Item* i, const char* name) {
	ElemType to_find ;
	strcpy(to_find.name, name);
	for (; !ListIsEmpty(i); i=ListGetTail(i)) {
		if (ElemCompare(&i->value, &to_find) == 0)
			return &i->value;
	}
	return NULL;
}