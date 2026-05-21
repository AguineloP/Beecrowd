#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;

	cin >> x;

	for(int i = 0, count = 0; count < 6; i++)
	{
		if((x+i) % 2 != 0) 
		{
			cout << x+i << endl;
			count++;
		}
	}
}
