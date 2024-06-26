#include<iostream>
#include<ctime>
#include<string>
#include<cstdlib>

using namespace std;
char MENU()
{
	cout << "Menu:" << endl
		<< "0 - zadanie nr 2 i 3 (losowanie i wyswietlanie tablicy)" << endl
		<< "1 - zadanie nr 4" << endl
		<< "2 - zadanie nr 5" << endl
		<< "3 - zadanie nr 16" << endl
		<< "4 - zadanie nr 17" << endl
		<< "5 - zadanie nr 18" << endl
		<< "6- zadanie nr 21" << endl
		<< "7 - zadanie nr 23" << endl
		<< "8 - zadanie nr 25" << endl
		<< "9 - zadanie nr 26" << endl
		<< "c - Wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;

	return 0;
}

int main()
{
	char wybor;

	srand(time(NULL));

	do
	{
		cout << endl;
		cout << MENU();
		cin >> wybor;
		
		system("cls");

		switch (wybor)
		{
			case '0':
			{
						int n;
						long double tab[10000];

						cout << "Podaj ile liczb chcesz wylosowac: " << endl;
						cin >> n;

						cout << "Wylosowane liczby: " << endl;
						for (int i = 0; i < n; i++)
						{
							tab[i] = rand() % 100;
							cout << tab[i] << endl;
						}
						cout << endl;
		
			break;
			}
			
		case '1':
		{
					long double tab[10000], min = 0, max = 0;
					int i, n;
					double srednia = 0;

					cout << "Podaj ile liczb chcesz wylosowac." << endl;
					cin >> n;
				
					cout <<endl<< "Wylosowane liczby: " << endl;

					for (i = 0; i < n; i++)
					{
						tab[i] = rand() % 100;
						cout << tab[i] << endl;
					}


					for (i = 0; i < n; i++)
					{
						for (int j = 0; j < n - 1; j++)
						{
							if (tab[j] > tab[j + 1])
								swap(tab[j], tab[j + 1]);
						}
						srednia = srednia + tab[i];
					}


					min = tab[0];
					max = tab[i - 1];
					srednia = srednia / n;

					cout <<endl<< "Max wynosi: " << max << endl;

					cout << "Min wynosi: " << min << endl;

					cout << "Srednia wynosi: " << srednia << endl;


					break;
		}
		case '2':
		{
					long double tab[10000];
					int i, n;

					cout << "Podaj ile liczb chcesz wylosowac: " << endl;
					cin >> n;
					

					cout << endl<<"Nieoposortowane liczby: " << endl;
					for (i = 0; i < n; i++)
					{
						tab[i] = rand() % 100;
						cout << tab[i] << endl;
					}


					for (i = 0; i < n; i++)
					{
						for (int j = 0; j < n - 1; j++)
						{
							if (tab[j] > tab[j + 1])
								swap(tab[j], tab[j + 1]);
						}
					}
					

					cout <<endl<< "Posortowane liczby:" << endl;
					for (i = 0; i < n; i++)
					{
						cout << tab[i] << endl;
					}


					break;
		}
		case '3':
		{
					int i, tab[255];
					char klawisz;

					cout << "Tablica ASCII:" << endl;

					for (i = 1; i <= 255; i++)
					{
						tab[i] = i;
						cout << "Nr " << tab[i] << " znak: " << (char)tab[i] << endl;
						if (i % 40 == 0)
						{
							cout << "Nacisnij klawisz, aby kontynuowac" << endl;
							cin >> klawisz;
						}

					}

					break;
		}
		case '4':
		{
					int silnia = 1, n, i = 0;

					cout << "Podaj liczbe do silni " << endl;
					cin >> n;
					if (n == 0)
					{
						cout << "Silnia wynosi: " << silnia << endl;
					}
					else
					if (n < 0)
					{
						cout << "Zla liczba" << endl;
					}
					else
					{
						for (i = 1; i <= n; i++)
						{
							silnia *= i;
						}
						cout << "Silnia wynosi: " << silnia << endl;
					}
					break;
		}
		case '5':
		{
					string napis;
					cout << "Podaj wyraz:" << endl;
					cin >> napis;
					int x = napis.length();
					bool palindrom = false;
					for (int i = 0; i < x; i++)
					{
						if (napis[i] == napis[x - 1])
						{
							palindrom = true;
						}
						swap(napis[i], napis[x - 1]);
						x--;
					}
					if (palindrom == true)
					{
						cout << "Wyraz " << napis << " jest palindromem." << endl;
					}
					else
					{
						cout << "Wyraz od tylu: " << napis << endl;
						cout << "Wyraz " << napis << " nie jest palindromem." << endl;
					}
					break;
		}
		case '6':
		{
					string slowo;
					cout << "Podaj slowo:" << endl;
					cin >> slowo;
					for (int i = 0; i < slowo.length(); i++)
					{
						if (slowo[i] > 95 && slowo[i] < 122)	//sprawdzanie czy jest to mala litera - tablica ASCII
						{
							slowo[i] = slowo[i] - 32;   //zamiana malej litery na wielka
						}
						else if ((int)slowo[i] >= 65 && (int)slowo[i] <= 90)
						{
							slowo[i] = (int)slowo[i] + 32;
						}
					}

					cout << slowo << endl;				//wypisanie wyrazu wielkimi literami



					break;
		}
		case '7':
		{
					int n;
					double suma = 0;
					cout << "Podaj n" << endl;
					cin >> n;
					for (int i = 0; i < n; i++)
					{
						suma = suma + pow(-1, n) / (2 * n + 1);
					}
					suma = suma * 4;
					cout << "Wynik wynosi:" << suma << endl;
					if (suma < 0)
					{
						cout << "Wynik jest ujemny" << endl;
					}
					else
						cout << "Wynik jest dodatni" << endl;
					break;
		}
		case '8':
		{

					int tab[10];

					for (int i = 0; i < 10; i++)
					{
						cout << "Podaj liczbe" << endl;
						cin >> tab[i];
					}

					//sortowanie malejaco
					for (int i = 0; i < 10; i++)
					{
						for (int j = 0; j < 9; j++)
						{
							if (tab[j] < tab[j + 1])
							{
								swap(tab[j], tab[j + 1]);
							}
						}
					}

					//wyswietlenie tablicy malejaco
					cout << "Posortowane malejaco:" << endl;
					for (int i = 0; i < 10; i++)
					{
						cout << tab[i] << endl;
					}


					//sortwoanie rosnaco
					for (int i = 0; i < 10; i++)
					{
						for (int j = 0; j < 9; j++)
						{
							if (tab[j] > tab[j + 1])
							{
								swap(tab[j], tab[j + 1]);
							}
						}
					}

					//wyswietlenie tablicy rosnaco
					cout << "Posortowane rosnaca:" << endl;
					for (int i = 0; i < 10; i++)
					{
						cout << tab[i] << endl;
					}

					break;
		}
			case '9':
			{

			cout << "Liczby pierwsze mniejsze od 100:" << endl;

			for (int i = 0; i < 100; i++)
			{
					if (i % 2 != 0)
				{
					cout << i << endl;
				}
			}

			
			break;
			}
			case 'c':
			{

						system("cls");
						break;
			}
		default:
			if (wybor != 'x' && wybor != 'X')
			{
				cout << endl;
				cout << "Zly wybor menu" << endl;
			}
			else
				return 0;
			break;
		}
	} while (wybor != 'x' && wybor != 'X');


	return 0;
}