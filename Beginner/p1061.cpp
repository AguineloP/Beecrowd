#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	int diaIni, diaFim, horaIni, horaFim, minIni, minFim, segIni, segFim;

	int diaT, hrT, minT, segT;
	bool flag[3] = {0, 0, 0};

	cin >> str >> diaIni;
	cin >> horaIni;
	cin >> str >> minIni;
	cin >> str >> segIni;

	cin >> str >> diaFim;
	cin >> horaFim;
	cin >> str >> minFim;
	cin >> str >> segFim;

	if(segFim < segIni)
	{
		segT = 60 - segIni + segFim;
		flag[0] = true;
	}
	else if(segFim > segIni)
	{
		segT = segFim - segIni;
	}
	else segT = 0;

	if(minFim < minIni)
	{
		minT = 60 - minIni + minFim;
		flag[1] = true;
	}
	else if(minFim > minIni)
	{
		minT = minFim - minIni;
	}
	else minT = 0;

	if(horaFim < horaIni)
	{
		hrT = 24 - horaIni + horaFim;
		flag[2] = true;
	}
	else if(horaFim > horaIni)
	{
		hrT = horaFim - horaIni;
	}
	else hrT = 0;

	if(diaIni == diaFim) diaT = 0;
		
	else diaT = diaFim - diaIni;

	if(flag[0]) minT--;
	if(flag[1]) hrT--;
	if(flag[2]) diaT--;

	if(minT < 0) minT = 60 - abs(minT);
	if(hrT < 0) 
	{
		diaT--;
		hrT = 24 - abs(hrT);
	}

	cout << diaT << " dia(s)\n" << hrT << " hora(s)\n" << minT << " minuto(s)\n" << segT << " segundo(s)\n";
}
