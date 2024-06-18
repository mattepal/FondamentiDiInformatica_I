#include "list.h"

const ElemType* MaxElement(const Item* i) {
	if (ListIsEmpty(i))
		return NULL;
	 ElemType* max = ListGetHeadValue(i);
	for(Item *tmp=i;!ListIsEmpty(tmp);ListGetTail(tmp) ){
		i = ListGetTail(i);
		if (ListIsEmpty(i))
			break;
		if (ElemCompare(max, ListGetHeadValue(i))<0) {
			max = ListGetHeadValue(i);
		}
		
	}
	return max;
}
//int main(void) {
//	ElemType i1[] = { 3, 4, 2, 0, 45, 1, 3 };
//	Item* i_1 = ListCreateEmpty();
//	for (int i = 0; i < sizeof(i1) / sizeof(ElemType); i++) {
//		i_1 = ListInsertBack(i_1, i1 + i);
//	}
//	ListWriteStdout(i_1);
//	{
//		const ElemType* res = MaxElement(i_1);
//	}
//	return 0;
//}