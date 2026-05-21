#include <bits/stdc++.h>

using namespace std;

int main()
{
	float i = 0, j = 1;

	for(int k = 0; k < 3; k++, j++) cout << "I=" << i << " J=" << j << endl;

	for(int k = 0; k < 5; k++)
	{
		i += 0.2;
		cout << "I=" << i << endl;
		cout << "I=" << i << endl;
		cout << "I=" << i << endl;
	}
}
