#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << std::fixed << std::setprecision(5);

	double a, b, c;

	std::cin >> a >> b >> c;

	double root = b*b - 4*a*c;

	if(a == 0 || root < 0)
        {
                std::cout << "Impossivel calcular" << std::endl;
                return 0;
        }
	
	double x1;
	x1 = (-b + sqrt(root)) / (2.0*a);
	std::cout << "R1 = " << x1 << std::endl;
	
	if(root > 0) 
	{
		double x2;
		x2 = (-b - sqrt(root)) / (2.0*a);
		std::cout << "R2 = " << x2 << std::endl;
	}
}
