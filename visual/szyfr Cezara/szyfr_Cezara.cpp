#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstdlib>
#include<string>
using namespace std;
void szyfr_Cezara(char wyraz[], int n)
{
	int dlugosc = strlen(wyraz);
	for (int i = 0; i <dlugosc; i++)
	{
		
		if (wyraz[i] >= 'A' && wyraz[i] <= 'Z' || wyraz[i]==' ')//duze litery
		{
			if (wyraz[i] + n > 'Z')
			{
				wyraz[i] = wyraz[i] - 26 + n;
			}
			else if (wyraz[i] + n < 'A')
			{
				wyraz[i] = wyraz[i] + 26 + n;
			}
			else
				wyraz[i] = wyraz[i] + n;
		}

		else
		if (wyraz[i] >= 'a' && wyraz[i] <= 'z')//male litery
		{
			if (wyraz[i] + n > 'z')
			{
				wyraz[i] = wyraz[i] - 26 + n;
			}
			else if (wyraz[i] + n < 'a')
			{
				wyraz[i] = wyraz[i] + 26 + n;
			}
			else
				wyraz[i] = wyraz[i] + n;


		}
		

	}

}

int main()
{

	char wyraz[3];
	int klucz;
	int licznik = 0;
	cout << "Podaj tekst do szyfrowania" << endl;
	cin >> wyraz;
		
	

	cout << "Podaj klucz" << endl;
	cin >> klucz;
	szyfr_Cezara(wyraz, klucz);
	cout << "Zaszyfrowany: "<<wyraz << endl;

	szyfr_Cezara(wyraz, -klucz);
	cout << "Odszyfrowany: " << wyraz << endl;

	system("pause");
	return 0;
}