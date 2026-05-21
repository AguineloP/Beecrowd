#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	float n;

	int nota[6] = {100, 50, 20, 10, 5, 2};
	int moeda[6] = {100, 50, 25, 10, 5, 1};
	int count;

	cin >> n;

	cout << "NOTAS: " << endl;

	for(int i : nota)
	{
		count = 0;
		while(n >= i && n > 0)
		{
			n -= i;
			count++;
		}
		cout << count << " nota(s) de R$ " << i << ".00" << endl;
	}
	int N = n*100 + 0.5;

	cout << "MOEDAS:" << endl;
	
	for(int i : moeda)
	{
		float x = float(i)/100;
		count = 0l;
		while(N >= i && N != 0)
		{
			N -= i;
			count++;
		}
		cout << count << " moeda(s) de $ " << x << endl;
	}
}
