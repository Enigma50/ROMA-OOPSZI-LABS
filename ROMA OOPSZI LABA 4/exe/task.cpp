#include <math.h>
#include "complex.h"
#include <iostream>
using namespace std;

Complex y(Complex z);
Complex sin(Complex z);

int main()
{
	double mod = 0, arg = 0;
	cout << "Enter module: ";
	cin >> mod;
	cout << "Enter argument: ";
	cin >> arg;
	Complex z = Complex(mod, arg);
	Complex result = y(z);
	cout << "z = " << z << "\r\ny(z) = " << result << "\r\n";
	system("pause");
	return 0;
}

Complex y(Complex z)
{
	return Complex(sqrt(1.), asin(1. / sqrt(1.))) + z * sin(1 + z);
}

Complex sin(Complex z)
{
	double newre = sin(z.Re()) * cosh(z.Im());
	double newim = cos(z.Re()) * sinh(z.Im());
	return Complex(sqrt(pow(newre, 2) + pow(newim, 2)), atan(newim / newre));
}
