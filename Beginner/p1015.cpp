#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << std::fixed << std::setprecision(4);

	double x1, x2, y1, y2;

	std::cin >> x1 >> y1 >> x2 >> y2;

	std::cout << std::sqrt(pow((x2-x1),2)+pow((y2-y1),2)) << std::endl;

	return 0;
}
