#include <iostream>

int main()
{
	int x;
	int dia, mes = 0, ano = 0;

	std::cin >> dia;

	while(dia >= 365)
	{
		ano++;
		dia -= 365;
	}

	while(dia >= 30)
	{
		mes++;
		dia -= 30;
	}

	std::cout << ano << " ano(s)\n"<< mes << " mes(es)\n" << dia << " dia(s)\n";
	
}
