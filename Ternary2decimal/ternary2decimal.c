#include <math.h>
#include <string.h>

int main(int argc,char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	size_t n = strlen(argv);
	int numero = 0;
	for (int i = 0; i<n;i++) {
		size_t esp = n - 1;
		if (argv[i] == 0) {
			numero = numero + 0 * pow(3, esp);
			esp--;
		}
		else if (argv[i] == '+') {
			numero = numero + 1 * pow(3, esp);
			esp--;
		}
		else if (argv[i] == '-') {
			numero = numero + (-1) * pow(3, esp);
			esp--;
		}
		else
			return 1;
		printf("%x/n",numero);
		return 0;
	}

}