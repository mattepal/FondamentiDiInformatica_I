


int tokyo_confronta(char a[2], char b[2]) {
	if (a[0] > 6 || a[0] < 1 || a[1] < 1 || a[1]>6)
		return 0;
	if (b[0] > 6 || b[0] < 1 || b[1] < 1 || b[1]>6)
		return 0;
	int da1 = (int)a[0], da2 = (int)a[1];
	int db1 = (int)b[0], db2 = (int)b[1];
	int numa = 0, numb = 0;
	if (da1 > da2) {
		numa = da1 * 10 + da2;
	}
	else {
		numa = da2 * 10 + da1;
	}
	if (db1 > db2) {
		numb = db1 * 10 + db2;
	}
	else {
		numb = db2 * 10 + db1;
	}
	if (numa == 21 && numb!=21) {
		return 1;
	}
	else if (numa != 21 && numb == 21) {
		return -1;
	}
	if (numa > numb)
		return 1;
	if (numa < numb)
		return -1;
	if (numa == numb)
		return 0;
}
//int main() {
//	char a[] = { 5,5};
//	char b[] = { 1,2 };
//	return tokyo_confronta(a, b);
//}