#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::fixed << std::setprecision(2);

	int a, b;
	float c, total;

	std::cin >> a >> b >> c;
	total = b*c;

	std::cin >> a >> b >> c;
	total += b*c;

	std::cout << "VALOR A PAGAR: R$ " << total << std::endl;
}
