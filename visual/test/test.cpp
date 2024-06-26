#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;
char MENU()
{
	cout << "Menu:" << endl
		<< "1 - zadanie nr 1 (dwa teksty) " << endl
		<< "2 - zadanie nr 2 (mediana z losowych liczb) " << endl
		<< "3 - zadanie nr 3 (potegowanie) " << endl
		<< "4 - zadanie nr 4 (obliczanie wzoru) " << endl
		<< "5 - zadanie nr 5 (palindrom) " << endl
		<< "c - wyczysc ekran " << endl
		<< "x / X - Wyjscie " << endl;
	return 0;
}
float potegowanie(float n, float a)
{
	if (n == 0)
	{
		return 1;

	}
	else
	{
		float potega = 1;
		if (n < 0)
		{
			a = 1 / a;
			n = -n;
		}

		for (int i = 0; i < n; i++)
		{
			potega *= a;
		}
		return potega;
	}
}


float mediana(int *tab, int n)
{
	float mediana;
	if (n % 2 == 0)
	{
		mediana = (tab[n / 2] + tab[(n / 2) - 1]) / 2;
	}
	else
	{
		mediana = tab[n / 2];
	}
	return mediana;
	
}

float oblicz_wzor(float x)
{
	float suma = 0;
	for (int i = 1; i <= x - 1; i++)
	{
		suma += (potegowanie(i, -1)*x*i) / (x - 1);
	}
	return suma;
}

bool czy_palindrom(string tekst)//sprawdzenie czy podany tekst jest palindromem
{
	bool czy_zdanie = false;
	for (int i = 0; i < tekst.length(); i++)
	{
		if (i>=0 && tekst[i] == ' ' )//sprawdzanie czy podane wyrazenie jest zdaniem/zawiera spacje
		{
			czy_zdanie = true;
		}

		if (tekst[i] >= 'A' && tekst[i] <= 'Z')//zamiana duzych liter na male
		{
			tekst[i] = tekst[i] + 32;
		}
	}

	if (czy_zdanie == true)
	{
		cout << "To jest zdanie." << endl;
		string spacja = " ";
		if (tekst[tekst.length() - 1] == '.' || tekst[tekst.length() - 1] == ' ')
		{
			tekst = spacja + tekst;
			tekst[tekst.length() - 1] = ' ';
			if (tekst[tekst.length() - 2] == '.')
			{
				tekst = spacja + tekst;
				tekst[tekst.length() - 2] = ' ';
			}
		}
		else
		if (tekst[0] == ' ')
		{
			tekst = tekst + spacja;
		}
	
	
	}

	cout << tekst<<endl;

	for (int i = 0; i < tekst.length(); i++)
	{
		//sprawdzenie czy litery czytane od poczatku zgadzaja sie z tymi czytanymi od tylu
		if (tekst[i] != tekst[tekst.length() - i - 1])
		{
			return false;
		}
	}
		return true;
		
	/*
	string tekst_bez_spacji;
	int index_bez_spacji = 0;

	for (int i = 0; i < tekst.length(); i++)
	{
		if (tekst[i] == ' ')
		{
			tekst_bez_spacji[index_bez_spacji] = tekst[i];
			index_bez_spacji++;
		}
	}

	//tekst_bez_spacji[index_bez_spacji] = '\0';
	
	
	for (int i = 0; i < tekst_bez_spacji.length(); i++)
	{
		//sprawdzenie czy litery czytane od poczatku zgadzaja sie z tymi czytanymi od tylu
		if ( tekst_bez_spacji [ i ] != tekst_bez_spacji [ tekst_bez_spacji.length() - i - 1 ] )	
			{
				return false;
			}	
	}
	return true;
	*/
}

char palindrom(string tekst)//wypisanie, ze tekst jest palindromem lub nie 
{
	if (czy_palindrom(tekst) == true)
	{
		cout << "Podany tekst jest palidromem." << endl;
	}
	else
	{
		cout << "Podany tekst nie jest palidromem." << endl;
	}
	return 0;
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
		case '1'://
		{
				char tekst[20], tekst2[20], tekst3[20],tekst_dluzszy[20];
				cout << "Podaj tekst nr 1" << endl;
				cin >> tekst;

				cout << "Podaj tekst nr 2" << endl;
				cin >> tekst2;

				int dlugosc_krotszego, dlugosc_dluzszego;

				if (strlen(tekst) < strlen(tekst2))
				{
					 dlugosc_krotszego = strlen(tekst);

					 dlugosc_dluzszego = strlen(tekst2) +1;

					 for (int i = 0; i < strlen(tekst2); i++)
					 {
						 tekst_dluzszy[i] = tekst2[i];
					 }
				}
				else
				{
					dlugosc_krotszego = strlen(tekst2);

					dlugosc_dluzszego = strlen(tekst) + 1;

					for (int i = 0; i < strlen(tekst); i++)
					{
						tekst_dluzszy[i] = tekst[i];
					}
				}


				int index = 0;


				for ( int i = 0; i <= dlugosc_krotszego; i++)
				{
					
						tekst3[index] = tekst[i];
						index++;
					
						tekst3[index] = tekst2[i];
						index++;
				}
				
				for (int i = dlugosc_krotszego ; i <= dlugosc_dluzszego ; i++)
				{
					tekst3[index] = tekst_dluzszy[i];
					index++;
				}
				
				tekst3[index] = '\0';

				cout << "Tekst nr 3: " << tekst3 << endl;
					
					 break;
		}
		case '2'://
		{
					 int n;
					 int *tab;
					 
					 cout << "Ile liczb chcesz wylosowac?" << endl;
					 cin >> n;
					 tab = new int[n];
					 cout << "Wylosowane liczby: " << endl;
					 srand(time(NULL));
					 for (int i = 0; i < n; i++)
					 {
						 tab[i] = rand() % 100; 
						 cout << tab[i] << endl;
					 }
					 
					 for (int i = 0; i < n; i++)
					 {
						 for (int j = 0; j < n - 1; j++)
						 {
							 if (tab[j]>tab[j + 1])
							 {
								 swap(tab[j], tab[j + 1]);
							 }
						 }
					 }

					 cout <<endl<< "Posortowane: " << endl;
					 for (int i = 0; i < n; i++)
					 {
						 cout << tab[i] << endl;
					 }
					 cout << "Mediana wynosi: " << mediana(tab, n) << endl;
					 break;
		}
		case '3'://
		{
					 float a, n;
					 cout << "Podaj liczbe. " << endl;
					 cin >> a;
					 cout << "Podaj potege, do ktorej ma zostac podniesiona liczba. " << endl;
					 cin >> n;
					 cout << "Potega wynosi: " << potegowanie(n, a) << endl;


					 break;
		}
		case '4'://obliczanie wzoru
		{
					 float x;
					 cout << "Podaj x:" << endl;
					 cin >> x;
					 cout << "Wynik wynosi: " << oblicz_wzor(x) << endl;

					 break;
		}
		case '5'://palindrom
		{
					 string tekst;
					 
					 cout << "Podaj tekst do okreslenia czy jest palidnromem." << endl;
					 cin.ignore();
					 getline(cin, tekst);
					
					 palindrom(tekst);
					 
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