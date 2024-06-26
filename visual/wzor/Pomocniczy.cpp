#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
char MENU(char)
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
int przyblizona_liczba(int liczba)
{
	if (liczba % 10 == 0)
	{
		return liczba;
	}
	else
	if (liczba % 10 >= 5)
	{
		return liczba - liczba % 10 + 10;
	}
	else
	{
		return liczba - liczba % 10;
	}
}