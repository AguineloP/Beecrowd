#include <iostream>
#include <cmath>

int maior(int a, int b, int c)
{
	int mAB = (a+b + abs(a-b))/2;
	int mC = (mAB+c + abs(mAB-c))/2;
	return mC;
}

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	std::cout << maior(a, b, c) << " eh o maior" << std::endl;

	return 0;
}
