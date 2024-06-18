#include <math.h>

double newton(double m1, double m2, double d) {
	double f;
	if (m1 < 0 || m2<0 || d<0) {
		return -1;
	}
	f =(6.6725*pow(10,-11))*((m1*m2)/pow(d,2));
	return f;
}