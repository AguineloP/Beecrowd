#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);
	float sal;
	int inc;

	cin >> sal;

	if(sal < 400.01) inc = 15;
	else if(sal < 800.01) inc = 12;
	else if(sal < 1200.01) inc = 10;
	else if(sal < 2000.01) inc = 7;
	else inc = 4;

	cout << "Novo salario: " << sal + (sal * inc/100) << endl
	<< "Reajuste ganho: " << sal * inc/100 << endl
	<< "Em percentual: " << inc << " %\n";
}
