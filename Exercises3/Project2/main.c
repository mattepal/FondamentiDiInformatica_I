unsigned char bit_n(unsigned int val, unsigned char n) {
	char i = 0;
	while (val/2 != 0 ) {
		if (i == n) {
			return val % 2;
		}
		else {
			val = val / 2;
			i = i + 1;
		}
	}
}
int main(void) {
	char z;
	unsigned char n;
	unsigned int val;
	val = 20;
	n = 3;
	z = bit_n(val,n);
	return;
}