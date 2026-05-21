#include <iostream>
#include <iomanip>
#include <string>

int main()
{
	std::cout << std::fixed << std::setprecision(2);
	std::string name;
	double salary, totalValueSold;

	std::getline(std::cin, name);

	std::cin >> salary >> totalValueSold;

	std::cout << "TOTAL = R$ " << salary + 0.15*totalValueSold << std::endl;

	return 0;
}
