#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;
char MENU()
{
	cout << "Menu:" << endl
		<< "1 - Srednia harmoniczna" << endl
		<< "2 - Ilosc wyrazow w tekscie" << endl
		<< "3 - Losowanie liczb" << endl
		<< "c - wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;
	return 0;
}
float srednia_harmoniczna(float *tab,int n)
{
	double suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += 1 / tab[i];
	}
	return (float)n/suma;
}
int ilosc_wyrazow(string tekst)
{
	int licznik = 1;
	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] == ' ')
		{
			licznik++;
		}
	}
	return licznik;
}
int najblizsza_liczba(int n)
{
	 float *tab;
	srand(time(NULL));
	tab = new float[n];
	float najblizsza = 0;
	cout << "Wylosowane liczby:" << endl;
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 100;
		cout << tab[i] << endl;
	}

	najblizsza = tab[0];
	for (int i = 0; i < n; i++)
	{
		if (abs(n-najblizsza) > abs(n-tab[i]))
		{
			najblizsza = tab[i];
		}
	} 

	return najblizsza;
}

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
				
				cout << "Najblizsza liczba podanej liczby: " << n << " to: " << najblizsza_liczba(n) << endl;
				
				
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