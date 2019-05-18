#include <math.h>

double summ(int n)
{
	double result = 0;
	int i = 0;
	while ( i < n )
	{
		result += pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
		i++;
	}
	return result;
}