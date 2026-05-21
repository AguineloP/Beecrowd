#include <iostream>
#include <iomanip>

int main()
{
	float a, b, c;
       	int isT = 0;
	
	std::cout << std::fixed << std::setprecision(1);

	std::cin >> a >> b >> c;

	if ((a+b) > c && (a+c) > b && (b + c) > a) isT = 1;

	if(isT)
	{
		std::cout << "Perimetro = "<< a+b+c << std::endl;
	}

	else std::cout << "Area = "<< 0.5*(a+b)*c << std::endl;
}
