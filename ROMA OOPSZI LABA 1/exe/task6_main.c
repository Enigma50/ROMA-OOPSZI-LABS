#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

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