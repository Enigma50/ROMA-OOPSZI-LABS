#include <math.h>

int findFirstNegativeElement(double e)
{
	double ai = 1;
	int i = 0;
	do
	{
		ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		if (fabs(ai) <= e && ai < 0) return i;
		i++;
	} while (1);
	return -1;
}