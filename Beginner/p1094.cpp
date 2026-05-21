#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	int n, am;
	int totC = 0, totR = 0, totS = 0;
	int animal[3] = {0};
	char a;

	cin >> n;

	while(n--)
	{
		cin >> am;
		cin >> a;
		if(a == 'C') totC += am;
		else if(a == 'R') totR += am;
		else totS += am;
	}
	float tot = totC + totR + totS;
	cout << "Total: " << totC + totR + totS << " cobaias\nTotal de coelhos: " << totC
	<< "\nTotal de ratos: " << totR << "\nTotal de sapos: " << totS 
	<< "\nPercentual de coelhos: " << (totC * 100)/ tot << " %\nPercentual de ratos: "
	<< (totR * 100)/ tot << " %\nPercentual de sapos: " << (totS * 100)/ tot << " %\n";
}
