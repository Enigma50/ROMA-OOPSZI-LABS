#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

double f(double x);

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