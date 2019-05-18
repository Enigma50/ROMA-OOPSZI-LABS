#include <math.h>

int findFirstElement(double e)
{
	double ai = pow(-1., 0) * 1 / (1 * 2 * 3);
	if (fabs(ai) <= e) return 0;
	for (int i = 0;; i++)
	{
		ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		if (fabs(ai) <= e) return i;
	}
	return -1;
}