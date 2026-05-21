#include <iostream>
#include <iomanip>

int main()
{
	double A, B, avA, avB;

	std::cin >> A >> B;

	avA = 3.5*A;
	avB = 7.5*B;

	std::cout << std::fixed << std::setprecision(5);
	
	std::cout << "MEDIA = " << (avA+avB)/11 << std::endl;
	return 0;
}
