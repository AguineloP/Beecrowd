#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ini, fim, tempo;

	cin >> ini >> fim;
	
	if(ini > fim) tempo = 24 - ini + fim;
	else if(ini == fim) tempo = 24;
	else tempo = fim - ini;

	cout << "O JOGO DUROU " << tempo << " HORA(S)" << endl;
}
