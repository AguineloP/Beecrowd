#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	float sal, taxes;

	cin >> sal;

	if(sal < 2000.01) cout << "Isento\n";
	else if(sal < 3000.01) taxes = (sal - 2000) * 0.08;

	else if(sal < 4500.01) taxes = 1000 * 0.08 + (sal - 3000) * 0.18;
	
	else taxes = 1000 * 0.08 + 1500 * 0.18 + (sal - 4500) * 0.28;

	if(sal > 2000) cout << "R$ " << taxes << endl;
}
