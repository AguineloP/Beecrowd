#include <iostream>
#include <iomanip>

int main()
{
	std::cout << std::fixed << std::setprecision(1);
	float n1, n2, n3, n4;

	float avg;

	std::cin >> n1 >> n2 >> n3 >> n4;

	avg = (n1*2 + n2*3 + n3*4 + n4*1)/10;

	if(avg >= 7) std::cout << "Media: " << avg << "\nAluno aprovado.\n";
	else if(avg < 5) std::cout << "Media: " << avg << "\nAluno reprovado.\n";
	else if(avg >= 5 && avg < 7)
	{
		float n5;
		std::cin >> n5;
		std::cout << "Media: " << avg << "\nAluno em exame.\n" << "Nota do exame: " << n5 << std::endl;
		avg = (avg + n5)/2;

		if(avg >= 5) std::cout << "Aluno aprovado.\n";
		else std::cout << "Aluno reprovado.\n";

		std::cout << "Media final: " << avg << std::endl;
	}
}
