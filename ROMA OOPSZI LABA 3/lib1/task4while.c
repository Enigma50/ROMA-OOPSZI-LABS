#include <math.h>

int findFirstElement(double e)
{
	double ai = pow(-1., 0) * 1 / (1 * 2 * 3);
	if (fabs(ai) <= e) return 0;
	int i = 0;
	while (1)
	{
		ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		if (fabsf(ai) <= e) return i;
		i++;
	}
	return -1;
}