#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
	double r;

	const double pi = 3.14159;

	std::cin >> r;

	std::cout << std::fixed << std::setprecision(3);

	std::cout << "VOLUME = " << (4.0 * pi * pow(r, 3))/3 << std::endl;
	return 0;
}
