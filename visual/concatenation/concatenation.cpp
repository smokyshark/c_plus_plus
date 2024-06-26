#include<iostream>
#include<string>
using namespace std;
int main()
{
	string tekst, tekst2, tekst3, tekst_dluzszy;
	cout << "Podaj tekst nr 1" << endl;
	cin >> tekst;

	cout << "Podaj tekst nr 2" << endl;
	cin >> tekst2;
	int dlugosc_krotszego, dlugosc_dluzszego;
	if (tekst.length() < tekst2.length())
	{
		dlugosc_krotszego = tekst.length();
		dlugosc_dluzszego = tekst2.length();
	}
	else
	{
		dlugosc_krotszego = tekst2.length();
		dlugosc_dluzszego = tekst.length();
	}

	int index = 0;
	for (int i = 0; i <= dlugosc_krotszego; i++)
	{
		
			tekst3[index] = tekst[i];
			index++;
		
			tekst3[index] = tekst2[i];
			index++; 
	}
	tekst3[index] = '\0';
	cout << tekst3 << endl;

	system("pause");
	return 0;
}