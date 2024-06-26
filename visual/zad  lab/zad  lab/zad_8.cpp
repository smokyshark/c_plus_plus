#include<iostream>
#include<string>
using namespace std;

int main()
{
	string slowo;
	cout << "Podaj slowo:" << endl;
	cin >> slowo;
	for (int i = 0; i< slowo.length();i++)
	{
		if (slowo[i] > 95)				//sprawdzanie czy jestto mala litera - tablica ASCII
		{
			slowo[i] = slowo[i] - 32;   //zamiana malej litery na wielka
		}
	}

	cout << slowo << endl;				//wypisanie wyrazu wielkimi literami
	system("pause");
	return 0;

}