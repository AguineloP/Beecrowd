#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(1);

	int k;
	float x, y, z;

	cin >> k;

	for(int i = 0; i < k; i++)
	{
		cin >> x >> y >> z;
		
		cout << (x * 2 + y * 3 + z * 5)/10 << endl;
	}
}
