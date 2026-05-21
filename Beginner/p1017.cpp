#include <iostream>
#include <iomanip>

int main()
{
	int time, speed;

	std::cin >> time >> speed;
	std::cout << std::fixed << std::setprecision(3);
	
	int distance = time*speed;

	std::cout << distance/12.0 << std::endl;
}
