char max_pot10(unsigned int val)
{
	char i=0;
	if (val == 0) {
		return -1;
	}
	else
	{
		while (val >= 10) {
			val = val / 10;
			i = i + 1;
		}
		return i;
	}
}
int main(void)
{
	unsigned int val;
	char  z;
	val=0;
	z = max_pot10(val);
	return 0;
}
