#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
int main()
{
	
	double dzien=4,miesiac=9,dni=0,miesiace=0;
	int rok =0, lata=0;
	time_t czas;
	time(&czas);
	cout << "Podaj rok urodzenia " << endl;
	cin >> rok;
	cout << "Podaj miesiac urodzenia " << endl;
	cin >> miesiac;
	cout << "Podaj dzien urodzenia " << endl;
	cin >> dzien;
	
	//cout << localtime(&czas)->tm_year << endl;//funkcja localtime(& czas) = rok - 1900
	lata = localtime(&czas)->tm_year - rok + 1900;
	cout << "Masz "<<lata <<" lat."<< endl;
	dni = localtime(&czas)->tm_yday + (lata-1) * 365 - dzien ;
	
	for (int i= rok; i <= localtime(&czas)->tm_year + 1900; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			dni += 1;
		}
	}
	if (miesiac == 12)
	{
		dni = dni + 31;
	}

	else if (miesiac == 11)
	{
		dni = dni + 30 + 31 ;

	}
	else if (miesiac == 10)
	{
		dni = dni + 31 + 30 + 31 ;
	}
	else if (miesiac == 9)
	{
		dni = dni + 31 + 30 + 31 + 30;

	}
	else if (miesiac == 8)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31;

	}
	else if (miesiac == 7)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30;
	}
	else if (miesiac == 6)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31;

	}
	else if (miesiac == 5)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31;

	}
	else if (miesiac == 4)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30;


	}
	else if (miesiac == 3)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;

	}
	else if (miesiac == 2)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 28 ;

	}
	else if (miesiac == 1)
	{
		dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 28 + 31;

	}
	

	cout << "Przezyles " << dni << " dni." << endl;
	

	system("pause");
	return 0;
}