#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<Windows.h>
using namespace std;

int main()
{
	int liczba;
	cout << "Podaj liczbe ";
	int n = 2;
	cin >> liczba;
	for (; n <= sqrt(liczba); n++)
	{
		if (liczba%n == 0)
		{
			cout << "Liczba nie jest pierwsza, jest podzielna przez: "<<n << endl;
			break;
		}
		/*else
		{
			cout << "Liczba jest pierwsza." << endl;
			break;
		}
		*/
	}
	if (n == liczba)
	{
		cout << "Liczba jest pierwsza." << endl;
	}



	system("pause");
	return 0;
}