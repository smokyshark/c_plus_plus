#include<iostream>
#include<cstdlib>
using namespace std;
char MENU()
{
	cout << "Wybierz program:" << endl
		<< "1 - Program nr 1 - Oblicz PI." << endl
		<< "2 - Program nr 2 - Wypisz ciag Fibonacciego." << endl
		<< "3 - Program nr 3 - Sprawdz czy liczba jest pierwsza." << endl
		<< "4 - Program nr 4 - Sprawdz czy liczba jest pierwsza z podanego zakresu." << endl
		<< "5 - Program nr 5 - Oblicz sume ciagu." << endl
		<< "x lub X - Koniec programu" << endl;
	return 0;
}
char WZOR()
{
	cout << "Wybierz wzor, z ktorego chcesz zkorzystac:" << endl 
	<< " 1 - Wzor Leibniza" << endl << "2 - Wzor Wallisa" << endl;
	return 0;
}
bool czy_pierwsza(int liczba)
{
	
	if (liczba < 2)
	{
		return false;
	}
	else;
	for (int i = 2; i < liczba; i++)

	if (liczba % i == 0)
	{
		return false;
	}
	else;
	{
		return true;
	}
}

int main()
{
		char wybor;
		
		double pi = 0, suma_ciagu=0;
		
			cout << MENU();
			cin >> wybor;
			if (wybor == 'x' || wybor == 'X')
			{
				return 0;
			}
			else;
		

			switch (wybor)
			{
			case '1'://zadanie 1 oblicz PI ze wzoru Leibniza i Wallisa
			{
						 int wybor_wzoru;
						 double N = 0;
					   cout << WZOR();
					   cin >> wybor_wzoru;
					   cout.precision(17);

					   switch (wybor_wzoru)
					   {
					   case 1:		//wzór Leibniza
					   {
										cout << "Podaj N: " << endl;
										cin >> N;

										for (int i = 0; i < N; i++)
										{

											pi = pi + pow(-1, i) / (2 * i + 1);
										}
										cout << "Liczba PI wynosi: " << pi * 4 << endl;
										break;
					   }
					   case 2:		//wzór Wallisa
					   {
										cout << "Podaj N: " << endl;
										cin >> N;
										pi = 1;
										
										for (int i = 1; i < N; i++)
										{
											pi = pi * (4.0*i*i) / ((2 * i + 1)*(2 * i - 1));
										}

										cout << "Liczba PI wynosi: " << pi * 2 << endl;

										break;
					   }

					   default:
						   cout << "Zly wybor" << endl;

						   break;
					   }
					   break;
			}
			case '2':			//zadanie 6 - ciag Fibonacciego do 250 wyrazu
			{
								long long tab[250];
								tab[0] = 0;
								tab[1] = 1;
								for (int i = 2; i < 250; i++)
								{
									tab[i] = tab[i - 1] + tab[i - 2];
								}
								cout << "Liczby Fibonacciego to:" << endl;
								for (int i = 0; i < 250; i++)
								{
									cout << tab[i] << " ";
								}
								cout << endl;

								break;
			}
			case '3'://zadanie 10 czy podana liczba jest pierwsza
			{
					   int liczba;
					   cout << "Podaj liczbe:" << endl;
					   cin >> liczba;
					   if (czy_pierwsza(liczba) == true)
					   {
						   cout << "Liczba " << liczba << " jest pierwsza." << endl;
					   }
					   else
						   cout << "Liczba " << liczba << " nie jest pierwsza." << endl;

					   break;
			}
			case '4'://zadanie 11 czy pierwsza z zakresu podanego przez uzytkownika
			{
					   int a = 0, b = 0;
					   cout << "Podaj zakres liczbowy." << endl << "Podaj liczbe od lewej strony:" << endl;
					   cin >> a;
					   cout << "Podaj liczbe z prawej strony:" << endl;
					   cin >> b;
					   cout << "Liczby pierwsze z podanego zakresu to:" << endl;
					   for (int i = a; i <= b; i++)
					   {
						   if (czy_pierwsza(i) == true)
						   {
							   cout << i << " ";

						   }
					   }
					   cout << endl;

					   break;
			}
			case '5':
			{
					  int N;
					  cout << "Podaj N: " << endl;
					  cin >> N;

					  for (int i = 0; i < N; i++)
						  suma_ciagu = suma_ciagu + 4.0*pow(-1, i) / (2 * i + 1);
					  cout << "Suma ciagu " << N << " wyrazow wynosi: " << suma_ciagu << endl;
					  break;
			}
			default:
				cout << "Zly wybor" << endl;
				break;
			}
		
			
			
		



	system ("pause");
	return 0;
}