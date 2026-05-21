#include <iostream>
#include <iomanip>

int main()
{
	double a, b, c;
	const double pi = 3.14159;
	std::cout << std::fixed << std::setprecision(3);

	std::cin >> a >> b >> c;

	std::cout << "TRIANGULO: " << a*c/2 << std::endl;
	std::cout << "CIRCULO: " << pi*c*c << std::endl;
	std::cout << "TRAPEZIO: " << ((a+b)*c)/2 << std::endl;
	std::cout << "QUADRADO: " << b*b << std::endl;
	std::cout << "RETANGULO: " << a*b << std::endl;

	return 0;
}	
