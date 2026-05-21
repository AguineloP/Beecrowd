#include <bits/stdc++.h>

using namespace std;

int main()
{
	float x;
	int total = 0;
	for(int i = 0; i < 6; i++)
	{
		cin >> x;
		if(x > 0) total++;	
	}
	cout << total << " valores positivos\n";	
}
