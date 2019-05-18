#include <math.h>

double summ2(double e)
{
	double ai = pow(-1., 0) * 1 / (1 * 2 * 3);
	if (fabs(ai) < e) return ai;
	double result = ai;
	for (int i = 1; fabs(ai) > e; i++)
	{
		ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		result += ai;
	}
	return result;
}