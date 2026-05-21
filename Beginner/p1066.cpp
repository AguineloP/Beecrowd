#include <bits/stdc++.h>

using namespace std;

int main()
{
	int val[5], counter[4] = {0}; //counter[]: 0=even, 1=odd, 2=positive, 3=negative

	for(int i = 0; i < 5; i++)
	{
		cin >> val[i];
		if(val[i] % 2 == 0) counter[0]++;
		else counter[1]++;
		
		if(val[i] > 0) counter[2]++;
			else if(val[i] < 0) counter[3]++;
	}
	cout << counter[0] << " valor(es) par(es)\n"
	<< counter[1] << " valor(es) impar(es)\n"
	<< counter[2] << " valor(es) positivo(s)\n"
	<< counter[3] << " valor(es) negativo(s)\n";
}
