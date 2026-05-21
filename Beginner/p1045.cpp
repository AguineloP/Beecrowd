#include <bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, c;
	double v[3];

	cin >> v[0] >> v[1] >> v[2];

	sort(v, v+3, greater());

	a = v[0];
	b = v[1];
	c = v[2];

	if(a >= b+c) cout << "NAO FORMA TRIANGULO" << endl;

	else
	{

		if(a*a == (b*b) + (c*c)) cout << "TRIANGULO RETANGULO" << endl;

		if(a*a > (b*b) + (c*c)) cout << "TRIANGULO OBTUSANGULO" << endl;

		if(a*a < ((b*b) + (c*c))) cout << "TRIANGULO ACUTANGULO" << endl;

		if(a == b && a == c) cout << "TRIANGULO EQUILATERO" << endl;

		if((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) cout << "TRIANGULO ISOSCELES" << endl;
	}
}
