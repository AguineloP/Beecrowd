#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x, countI = 0, countO = 0;

	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x >= 10 && x <= 20) countI++;
		else countO++;
	}
	cout << countI << " in\n" << countO << " out\n";
}
