#include "myMath.h"

double Power(double x, int y) {
	if (y == 0)
		return 1;


	if (y < 0) {
		y *= -1;
		x = 1 / x;
	}
	double ans = x;
	while (y > 1) {
		ans *= x;
		y--;
	}

	return ans;
}

double Exponent(int x)
{
	double e = 2.718281828;
	return Power(e, x);
}

