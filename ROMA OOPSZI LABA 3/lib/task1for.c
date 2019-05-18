#include <math.h>

double summ(int n)
{
	double result = 0;
	for (int i = 0; i < n; i++)
	{
		result += pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
	}
	return result;
}