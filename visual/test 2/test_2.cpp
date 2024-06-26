#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
#include "test_2_biblioteka.h"
using namespace std;



int main()
{
	char wybor;
	do
	{
		cout << endl;
		cout << MENU();
		cin >> wybor;

		switch (wybor)
		{
		case '1'://funkcja f(p)
		{
					 double p;
					 cout << "Podaj p do obliczenia f(p)." << endl;
					 cin >> p;
					 oblicz_wzor(p);
					 break;
		}
		case '2'://ile cyfr ma liczba
		{
					 int liczba;
					 cout << "Podaj liczbe." << endl;
					 cin >> liczba;
					 cout << "Podana liczba ma " << liczba_cyfr(liczba) << " cyfr." << endl;
					
					 break;
		}
		case '3'://ilosc samoglosek w txt/
		{
					char  tekst[100];
					 cout << "Podaj tekst do znalezienia samoglosek." << endl;
					 cin.sync();
					 cin.getline(tekst, 100);
					 cout << "Ilosc samoglosek wynosi: " << ilosc_samoglosek(tekst) << endl;
					 /*
					 string tekst;
					 cout << "Podaj tekst do znalezienia samoglosek." << endl;
					 cin.sync();
					 getline(cin, tekst);
					// cout << "Ilosc samoglosek wynosi: " << ilosc_samoglosek(tekst) << endl;
					*/

					 int a;
					 cout << "Podaj parametr a." << endl;
					 cin >> a;
					 cout << "Ilosc slow dluzszych od parametru a: " << a << " wynosi: " << ilosc_slow(tekst, a) << endl;
					
					 
					 break;
		}
		case '4'://
		{
					 float tab[20];
					 srand(time(NULL));

					 cout << "Podaj 20 liczb." << endl;
					 for (int i = 0; i < 20; i++)
					 {
						 cout << "Podaj liczbe." << endl;
						 cin >> tab[i];
					 }

					 cout << "Srednia wynosi: " << srednia(tab);
					 cout << "Srednia zmieniona w najmniejszym stopniu: " << najmniejszy_stopien(tab) << endl;
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