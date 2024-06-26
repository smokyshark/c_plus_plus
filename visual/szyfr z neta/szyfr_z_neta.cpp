#include<iostream>
#include<cstdlib>

using namespace std;

void szyfruj(int klucz, char tab[])
{
	int dl = strlen(tab); //okreœlenie iloœci znaków wyrazu

	//sprawdzenie, czy klucz miesci sie w zakresie
	if (!(klucz >= -26 && klucz <= 26)) return;

	if (klucz >= 0)
	for (int i = 0; i<dl; i++)
	if (tab[i] + klucz <= 'Z')
		tab[i] += klucz;
	else
		tab[i] = tab[i] + klucz - 26;
	else
	for (int i = 0; i<dl; i++)
	if (tab[i] + klucz >= 'A')
		tab[i] += klucz;
	else
		tab[i] = tab[i] + klucz + 26;
}

int main()
{
	char tab[1001]; //tablica znaków - max 1000 znaków.

	int klucz;

	cout << "Podaj wyraz sk³adaj¹cy siê z du¿ych liter: ";
	cin >> tab;

	cout << "Podaj klucz z przedzia³u [-26..26]: ";
	cin >> klucz;

	szyfruj(klucz, tab); //szyfrowanie

	cout << "Po zaszyfrowaniu: " << tab << endl;

	szyfruj(-klucz, tab); //deszyfrowanie

	cout << "Po rozszyfrowaniu: " << tab << endl;

	system("pause");
	return 0;
}
