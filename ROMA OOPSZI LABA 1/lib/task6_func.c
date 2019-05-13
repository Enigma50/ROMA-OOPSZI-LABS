#define PI (4.*atan(1.))
#include <math.h>

extern double x, result;

void f()
{
	result = 2 * pow(sin(3 * PI - 2 * x), 2) * pow(cos(5 * PI + 2 * x), 2);
}