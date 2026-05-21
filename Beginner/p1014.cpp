#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::fixed << std::setprecision(3);

	int x;
	float y;

	std::cin >> x >> y;

	std::cout << x/y << " km/l" << std::endl;
}
