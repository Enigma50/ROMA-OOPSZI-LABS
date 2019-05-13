#define PI (4.*atan(1.))
#include <math.h>

double f(double x)
{
	return 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}