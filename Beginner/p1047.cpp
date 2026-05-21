#include <bits/stdc++.h>

using namespace std;

int main()
{
	int iniH, fimH, iniM, fimM, tempoH = 0, tempoM;
	bool flag = false;

	cin >> iniH >> iniM >> fimH >> fimM;

	if(fimM < iniM)
	{
		flag = true;
		tempoM = 60 - iniM + fimM;
	}
	else if(fimM == iniM) tempoM = 0;
	else tempoM = fimM - iniM;

	if(fimH < iniH) tempoH = 24 - iniH + fimH;
	else if(fimH == iniH && flag) tempoH = 24 - iniH + fimH;
	else if(fimH == iniH && iniM == fimM) tempoH = 24;
	else tempoH = fimH - iniH;
	
	if(flag) tempoH--;

	cout << "O JOGO DUROU " << tempoH << " HORA(S) E " << tempoM << " MINUTO(S)" << endl;
}	
