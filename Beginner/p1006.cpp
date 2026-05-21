#include <iostream>
#include <iomanip>

int main()
{
	double A, B, C;

	std::cin >> A >> B >> C;

	std::cout << std::fixed << std::setprecision(1);

	std::cout << "MEDIA = " << ((A*2) + (B*3) + (C*5))/10 <<  std::endl;
	
	return 0;
}
