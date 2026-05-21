#include <bits/stdc++.h>

using namespace std;

int main()
{
	int j = 3;
	for(int i = 1; i < 10; i+=2)
	{
		j += 4;
		cout << "I=" << i << " J=" << j-- << endl;
		cout << "I=" << i << " J=" << j-- << endl;
		cout << "I=" << i << " J=" << j << endl;
			
	}
}
