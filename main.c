#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "myMath.h"
int main() {
	
		double x;
		printf("Please inset a real number: \n" );
		scanf("%lf",&x);
		double a = sub(add(Exponent((int)x), Power(x, 3)), 2);
		double b = add(mul(3, x), mul(2, Power(x, 2)));
		double c = sub(div(mul(4, Power(x, 3)), 5), mul(2, x));

		printf("The value of f(x) = e ^ x + x ^ 3 - 2 at the point: %.4f is: %.4f\n",x,a);
		printf("The value of f(x) = 3x + 2x ^ 2 at the point: %.4f is: %.4f \n", x, b);
		printf("The value of f(x) = (4x ^ 3) / 5 - 2x at the point:  %.4f  is: %.4f",x,c);

	return 0;
}