#define _CRT_SECURE_NO_WARNINGS
#define PI (4.*atan(1.))

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double f(double x)
{
	return 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}

int main()
{
	double x = 1;
	printf("x = %lf\n\r", x);
	printf("f = %lf\n\r", f(x));

	printf("x = ");
	scanf("%lf", &x);
	printf("f = %lf\n\r", f(x));

	system("pause");
	return 0;
}