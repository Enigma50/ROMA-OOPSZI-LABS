#include <math.h>

float falco(float x)
{
	return (x <= 3) ? (pow(x, 2) - 3 * x + 9) : (1 / (pow(x, 3) + 6));
}