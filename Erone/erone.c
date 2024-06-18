#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

	int main(int argc, char* argv[]) {
		if (argc!=4) {
			return 1;
		}
		char* ptr;
		double a=strtod(argv[1],&ptr);
		double b=strtod(argv[2],&ptr);
		double c=strtod(argv[3],&ptr);
		if (a <= 0 || b <= 0 || c <= 0)
			return 1;
		double area =sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c));
		printf("%f", area / 4);
		return 0;
	}