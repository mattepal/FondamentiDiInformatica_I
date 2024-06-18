#define _CRT_SECURE_NO_WARNINGS
#include "list.h"
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Item* Delete(Item* i, const char* name) {
//	ElemType to_find;
//	strcpy(to_find.name, name);
//	Item* tmp = i;
//	Item* prec = i;
//	bool primo = true;
//	while (!ListIsEmpty(tmp)) {
//		if (ElemCompare(&tmp->value, &to_find)==0) {
//			if (primo) {
//				i = ListGetTail(i);
//				free(&tmp->value);
//				return i;
//			}
//			prec->next = tmp->next;
//			free(&tmp->value);
//			return i;
//		}
//		primo = false;
//		prec = tmp;
//		tmp = ListGetTail(tmp);
//	}
//	free(&tmp->value);
//	return i;
//}

int Compare(const ElemType* e1, const ElemType* e2) {
	return strcmp(e1->city, e2->city);
}

Item* Filtra(const Item* i, const char* city) {
	ElemType to_find;
	strcpy(to_find.city, city);
	Item *ret=ListCreateEmpty();
	for (; !ListIsEmpty(i); i = ListGetTail(i)) {
		if (Compare(&i->value, &to_find) == 0)
			ret = ListInsertBack(ret, &i->value);
	}
	return ret;
}

Item* Reverse(const Item* i) {
	Item* ret = ListCreateEmpty();
	for (; !ListIsEmpty(i); i = ListGetTail(i)) {
		ret = ListInsertHead(&i->value,ret);
	}
	return ret;
}

Item* Append(const Item* i1, const Item* i2) {
	Item* ret = ListCreateEmpty();
	for (; !ListIsEmpty(i1); i1 = ListGetTail(i1)) {
		ret = ListInsertBack(ret, &i1->value);
	}
	for (; !ListIsEmpty(i2); i2 = ListGetTail(i2)) {
		ret = ListInsertBack(ret,&i2->value);
	}
	return ret;
}
Item* AppendMod(Item* i1, Item* i2) {
	if (i1 == NULL && i2 == NULL) {
		return NULL;
	}
	else if (i1 == NULL) {
		return i2;
	}
	else if (i2 == NULL) {
		return i1;
	}
	Item* copy = i1;
	for (; i1->next != NULL; i1 = ListGetTail(i1));
	i1->next = i2;
	return copy;
}