#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x, big, ip;

	for(int i = 0; i < 10; i++)
	{
		cin >> x;
		if(x > big)
		{
			big = x;
			ip = i+1;
		}
	}

	cout << big << endl << ip << endl;
}
