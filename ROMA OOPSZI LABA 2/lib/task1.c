#include <math.h>

int inspace(float x, float y)
{
	return (x >= -1) && (y <= 1) && ((x - y) <= 0);
}