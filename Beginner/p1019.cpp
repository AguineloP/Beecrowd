#include <iostream>

int main()
{
	int n, h = 0, s = 0;
	float m = 0;
	std::cin >> n;

	if(n/60 >= 1)
	{
		m = n/60.0; 		
		if(m/60 >= 1)
		{
			h = m/60;
			m = int(m)%60;		
		}
		s = n%60;
	}
	if(n < 60) s = n;
	std::cout << h << ":" << int(m) << ":" << s << std::endl;
}
