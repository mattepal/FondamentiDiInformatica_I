#include <stdbool.h>

bool triangolare(int n) {
	int summ=0,cnt=1;
	while (summ<=n) {
		summ = summ + cnt;
		if (summ == n) {
			return true;
		}
		cnt = cnt + 1;
	}
	return false;
}

//bool main() {
//	int n = 6;
//	return triangolare(n);
//}