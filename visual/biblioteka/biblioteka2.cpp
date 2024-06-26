#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
#include "biblioteka.h"
using namespace std;



int main()
{
	char wybor;
	do
	{
	cout << endl;
	cout<<MENU();
	cin >> wybor;

	switch (wybor)
	{
	case '1'://srednia harmoniczna
	{
				int n;
				float *tab;
				cout << "Ile chcesz podac liczb do sredniej harmonicznej?" << endl;
				cin >> n;
				tab = new float[n];
				for (int i = 0; i < n; i++)
				{
					cout << "Podaj liczbe." << endl;
					cin >> tab[i];
				}
				cout << "Srednia harmoniczna wynosi: " << srednia_harmoniczna(tab,n) << endl;
				break;
	}
	case '2'://ilosc wyrazow w tekscie
	{
				string tekst;

				cout << "Podaj tekst." << endl;
				cin.sync();
				getline(cin, tekst);

				cout << "Podales/as " << ilosc_wyrazow(tekst) << " wyrazow" << endl;

				break;
	}
	case '3'://
	{
				int n;
				cout << "Podaj ile chcesz wylosowac liczb" << endl;
				cin >> n;
			
				cout << "Najblizsza liczba liczby: " << n << " to: " << najblizsza_liczba(n) << endl;
		
				break;
	}
	case 'c':
	{
				system("cls");
				break;
	}
	default:
	{
			   if (wybor != 'x' && wybor != 'X')
			   {
				   cout << "Zly wybor" << endl;
			   }
			   else
			   {
				   return 0;

			   }

			   break;
	}
	}
	} while (wybor != 'x' && wybor != 'X');
	
	return 0;
}