#define _CRT_SECURE_NO_WARNINGS
#define PI (4.*atan(1.))

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void f();
double x, result;

int main()
{
	x = 1;
	printf("x = %lf\n\r", x);
	f();
	printf("f = %lf\n\r", result);

	printf("x = ");
	scanf("%lf", &x);
	f();
	printf("f = %lf\n\r", result);

	system("pause");
	return 0;
}

void f()
{
	result = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}