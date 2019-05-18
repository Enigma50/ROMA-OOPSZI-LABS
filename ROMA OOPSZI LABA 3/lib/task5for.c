#include <math.h>
#include <stdio.h>

int findFirstNegativeElement(double e)
{
	printf("asd");
	double ai = 1;
	for (int i = 0;; i++)
	{
		ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		if (fabs(ai) <= e && ai < 0) return i;
	}
	return -1;
}