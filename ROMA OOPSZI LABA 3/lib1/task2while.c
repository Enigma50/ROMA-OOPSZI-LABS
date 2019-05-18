#include <math.h>

double summ2(double e)
{
	double ai = pow(-1., 0) * 1 / (1 * 2 * 3);
	if (fabs(ai) < e) return ai;
	double result = ai;
	int i = 1;
	while ( fabs(ai) > e)
	{
		ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		result += ai;
		i++;
	}
	return result;
}