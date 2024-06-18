#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	char *end;
	int n = strtol(argv[1], &end, 10);
	int numero = n;
	if (n < 0) {
			return 1;
	}
	while(numero>=9){
		int somma = 0;
		while (n > 0) {
			int c = n % 10;
			somma = somma + c;
			n = n / 10;
		}
		numero = somma;
		n = somma;
	}
	printf("%d", numero);
	return 0;

}