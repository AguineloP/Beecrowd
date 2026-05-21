#include <bits/stdc++.h>

using namespace std;

int main()
{
	int i = 1, j = 60;

	cout << "I=" << i << " J=" << j << endl;

	while(j != 0)
	{
		i+=3;
		j-=5;
		cout << "I=" << i << " J=" << j << endl;
	}	
}
