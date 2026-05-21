#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::fixed << std::setprecision(2);
	int x, y;
	float total;
	
	std::cin >> x >> y;

	switch (x)
	{
		case 1:
			total = 4.0*y;
		       	break;
		case 2:
			total = 4.5 * y;
			break;
		case 3: 
			total = 5.0 * y;
			break;
		case 4:
			total = 2.0 * y;
			break;
		case 5:
			total = 1.5 * y;
			break;
	}
	std::cout << "Total: R$ " << total << std::endl;
}
