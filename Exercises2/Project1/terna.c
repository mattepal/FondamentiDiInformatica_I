#include <stdbool.h>
#include <math.h>

bool is_terna_pitagorica(unsigned int v[3]) {
	int n1, n2, n3;
	n1 = v[0];
	n2 = v[1];
	n3 = v[2];
	if (pow(n1, 2) == (pow(n2, 2) + pow(n3, 2)) || pow(n2, 2) == (pow(n1, 2) + pow(n3, 2)) || pow(n3, 2) == (pow(n1, 2) + pow(n2, 2))) {
		return true;
	}
	else {
		return false;
	}
}
//int main() {
//	unsigned int v[3] = { 4,3,5 };
//	return is_terna_pitagorica(v);
//}