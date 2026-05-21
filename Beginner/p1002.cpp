/*PROBLEMA
 *

A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:

- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
Entrada

A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double pi = 3.14159;
	double r;

	cin >> r;
	cout << fixed << setprecision(4);
	cout << "A=" << pi * r * r << endl;
	return 0;
}
