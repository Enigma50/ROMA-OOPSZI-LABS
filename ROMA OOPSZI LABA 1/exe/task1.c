#define _CRT_SECURE_NO_WARNINGS
#define PI (4.*atan(1.))

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	double x = 1;
	double fx = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
	printf("x = %lf\n\r", x);
	printf("f = %lf\n\r", fx);

	printf("x = ");
	scanf("%lf", &x);
	fx = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
	printf("f = %lf\n\r", fx);

	system("pause");
	return 0;
}