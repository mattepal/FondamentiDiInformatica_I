#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	char* enp;
	int numero = strtol(argv[1], &enp,10);
	if (numero < 0)
		return 1;
	int div = 1;
	int conta = 0;
	while (conta < 3 && div <= numero / 2)
	{
		if (numero % div == 0) {
			conta = conta + 1;
		}
		div = div + 1;
	}
	if (conta == 1) {
		printf("true");
	}
	else {
		printf("false");
	}
		return 0;

}
