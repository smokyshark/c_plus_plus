#include "biblioteka.h"
#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

char MENU()
{
	cout << "Menu:" << endl
		<< "1 - zadanie nr 8 (srednia harmoniczna)" << endl
		<< "2 - zadanie nr 9 (ilosc wyrazow w tekscie)" << endl
		<< "3 - zadanie nr 10 ()" << endl
		<< "c - wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;
	return 0;
}

float srednia_harmoniczna(float *tab, int n)
{
	double suma = 0;
	for (int i = 0; i < n; i++)
	{
		suma += 1 / tab[i];
	}
	return (float)n / suma;
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
		if (abs(n - najblizsza) > abs(n - tab[i]))
		{
			najblizsza = tab[i];
		}
	}

	return najblizsza;
}
