#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(1);

	float n[6], sum = 0;
	int count = 0;

	for(int i = 0; i < 6; i++)
	{
		cin >> n[i];
		if(n[i] > 0)
		{
			sum += n[i];
			count++;
		}	
	}
	cout << count << " valores positivos\n";
	cout << sum/count << endl;
}
