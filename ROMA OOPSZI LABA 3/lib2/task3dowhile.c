#include <math.h>
#include <stdio.h>

void print(int n, int k)
{
	int i = 0;
	if (i >= n) return;
	do
	{
		if ((i+1) % k == 0)
		{
			i++;
			continue;
		}
		else
		{
			double ai = pow(-1., i) * 1 / ((i + 1)*(i + 2)*(i + 3));
			printf("%lf ", ai);
			i++;
		}
	} while (i < n);
}