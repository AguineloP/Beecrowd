#include <bits/stdc++.h>

using namespace std;

int main()
{
	int val[5], count = 0;

	for(int i = 0; i < 5; i++)
	{
		cin >> val[i];
		if(val[i] % 2 == 0) count++;
	}

	cout << count << " valores pares\n";
}
