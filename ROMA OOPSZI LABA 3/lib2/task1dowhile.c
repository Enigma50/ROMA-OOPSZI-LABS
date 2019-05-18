#include <math.h>

double summ(int n)
{
	double result = 0;
	int i = 0;
	if (i >= n) return 0;
	do
	{
		result += pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		i++;
	} while (i < n);
	return result;
}