#include <iostream>
#include <iomanip>

int main()
{
	int empNumber, hours;
	float amtPHour;

	std::cin >> empNumber >> hours >> amtPHour;

	std::cout << std::fixed << std::setprecision(2);

	std::cout << "NUMBER = " << empNumber << std::endl;
	std::cout << "SALARY = U$ " << hours*amtPHour << std::endl;

	return 0;
}
