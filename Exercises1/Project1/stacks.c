#include "stacks.h"

int sommastack(Stack stacks) {
	int sum = 0;
	for (size_t i = 0; i < stacks.m; i++)
	{
		sum = sum + stacks.elements[i];
	}
	return sum;
}
bool diversi(Stack *stacks, size_t n) {
	for (size_t i = 0; i < n-1; i++)
	{
		if (sommastack(stacks[i]) != sommastack(stacks[i + 1]))
			return true;
	}
	return false;
}

unsigned MaxSumNStack(Stack* stacks, size_t n)
{
	int somma, indice;
	while (diversi(stacks,n)) {
		int max_sum = 0;
		for (size_t i = 0; i < n; i++)
		{
			somma=sommastack(stacks[i]);
			if (somma > max_sum) {
				max_sum = somma;
				indice = i;
			}
		}
		if(max_sum!=0)
		stacks[indice].m = stacks[indice].m - 1;
	}
	return sommastack(stacks[indice]);
}

int main(void) {
	Stack lista[3];
	int elementi[] = { 1, 1, 1, 2, 3 };
	lista[0].elements = elementi;
	lista[0].m = 5;
	int elementi1[] = { 2, 3, 4 };
	lista[1].elements = elementi1;
	lista[1].m = 3;
	int elementi2[] = { 1, 4, 5, 2 };
	lista[2].elements = elementi2;
	lista[2].m = 4;
	unsigned res = MaxSumNStack(lista, 3);
	return 0;
}