#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
using namespace std;
char MENU()
{
	cout << "Menu:" << endl
		<< "1 - zadanie nr 1 (srednia geometryczna)" << endl
		<< "2 - zadanie nr 2 (NWD 2 liczb)" << endl
		<< "3 - zadanie nr 3 (NWD 3 liczb)" << endl
		<< "4 - zadanie nr 4 (szyfr Cezara)" << endl
		<< "5 - zadanie nr 5 (zaokraglanie liczb)" << endl
		<< "6 - zadanie nr 6 (liczby pierwsze mniejsze od 100)" << endl
		<< "7 - zadanie nr 7 (oblicznie objetosci i pola powierzchni kuli)" << endl
		<< "8 - zadanie nr 11 (obliczanie n-tego elementu ciagu)" << endl
		<< "c - wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;
	return 0;
}

float srednia_geometryczna(float &x, float &y, float &z)
{
	float srednia_geometryczna;
	srednia_geometryczna = pow(x*y*z, 1 / (float)3);
	return srednia_geometryczna;
}

int NWD(int x, int y)
{
	int mod = 0, xzap = x, yzap = y;
	while (y != 0)            
	{
		mod = x % y;
		x = y;
		y = mod;
	}
	return x;                 
}

int NWD(int x, int y, int z)//przeciazenia funkcji
{
	return NWD(NWD(x, y), z);

}

string szyfr_Cezara(string wyraz, int n)
{
	for (int i = 0; i < wyraz.length(); i++)
	{
		
			if (wyraz[i] >= 'A' && wyraz[i] <= 'Z')//duze litery
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
	return wyraz;
}

double zaokraglanie(double liczba)
{
	if (liczba - (int)liczba >= 0.5)
	{
		return (int)liczba + 1;
	}
	else
		return (int)liczba;
}

bool czy_Pierwsza(int n)
{

	if (n < 2)
	{
		return false;
	}
	else;
	for (int i = 2; i < n; i++)

	if (n % i == 0)
	{
		return false;
	}
	else;
	{
		return true;
	}
}

float pp_kuli(float & R)
{
		return 4 * M_PI*pow(R, 2);
}

float v_kuli(float & R)
{
		return (4 * M_PI*pow(R, 3)) / 3;
}

long long int ciag(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return ciag(n - 2) + 2 * ciag(n - 1);
	}
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
		case '1'://Średnia geometryczna
		{
					float a, b, c;
					

					cout << "Podaj 3 liczby do sredniej geometrycznej" << endl;
					cin >> a >> b >> c;
					if (a < 0 || b < 0 || c < 0)
					{
						cout << "Podano zle parametry" << endl;
					}
					else
					{
						cout << "Srednia geometryczna wynosi: "<<srednia_geometryczna(a,b,c);
					}

					
				  break;
		}
		case '2'://NWD 2 liczb
		{
					int a, b;
					cout << "Podaj 2 liczby, aby znalezc najwiekszy wspolny dzielnik." << endl;
					cin >> a >> b;
					
					cout << "NWD(" << a << "," << b << ") = "<<NWD(a,b);

					break;
		}

		case '3'://NWD 3 liczb
		{
					 int a, b, c;
					cout << "Podaj 3 liczby, aby znalezc najwiekszy wspolny dzielnik." << endl;
					cin >> a >> b >> c;
					//int x = NWD(b, c);
					cout << "NWD(" << a << ", " << b << ", " << c << ") = " << NWD(a, b, c) << endl;
					break;
		}
		case '4'://szyfr Cezara
		{
					string wyraz;
					int n;

					cout << "Podaj tekst do zaszyfrowania." << endl;
					cin.sync();
					getline(cin, wyraz);
					cout << "Podaj klucz szyfrowania(liczbe calkowita o ile chcesz przesunac wyraz)." << endl;
					cin >> n;
					

					string zaszyfrowany = szyfr_Cezara(wyraz,n);
					cout << "Zaszyfrowany wyraz: " << zaszyfrowany << endl;

					n = -n;
					string odszyfrowany = szyfr_Cezara(zaszyfrowany,n);
					cout << "Odszyfrowany wyraz: " << odszyfrowany << endl;

					break;
		}
		case'5'://zaokrąglanie liczby
		{
				   float liczba;
				   cout << "Podaj liczbe, ktora chcesz zaokraglic" << endl;
				   cin >> liczba;
				   cout << "Zaokraglona liczba to: " << zaokraglanie(liczba) << endl;
	
				   break;
		}
		case '6'://liczby pierwsze mniejsze od 100
		{

					 cout << "Liczby pierwsze mniejsze od 100:" << endl;
					
					 for (int i = 0; i < 100; i++)
					 {
						 if (czy_Pierwsza(i))
						 {
							 cout << i << endl;
						 }
					 }


					break;
		}
		case '7'://oblicznie objetosci i pola powierzchni kuli
		{
					float r;
					cout << "Podaj promien kuli" << endl;
					cin >> r;
					if (r < 0)
					{
						cout << "Taka kula nie istnieje." << endl;
					}
					else
					{
						cout << "Pole powierzchni kuli o promieniu r = " << r << " wynosi: " << pp_kuli(r) << endl;

						cout << "Objetosc kuli o promieniu r = " << r << " wynosi: " << v_kuli(r) << endl;
					}
					break;
		}
		case '8'://obliczanie n-tego elementu ciagu
		{
					  int n;
					 cout << "Podaj, ktory wyraz ciagu chcesz obliczyc." << endl;
					 cin >> n;
					 if (n >= 0)
					 {
						 cout << "Wyraz ciagu o nr " << n << " wynosi: " << ciag(n) << endl;
					 }
					 else
						 cout << "Nie mozna obliczyc wyrazu ciagu o podanym nr." << endl;
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
				cout << "Zly wybor" << endl;
			}
			else
			{
				return 0;
				
			}
		
		}
	} 
	while (wybor != 'x' && wybor != 'X');



	system("pause");
	return 0;
}