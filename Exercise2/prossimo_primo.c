double square_dist(double x1, double y1, double x2, double y2)
{
	return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}
int main(void)
{
	double x1, x2, y1, y2, z;
	x1 = 1;
	y1 = 3;
	x2 = 2;
	y2 = 4;
	z = square_dist( x1, y1, x2,  y2);
	return 0;
}