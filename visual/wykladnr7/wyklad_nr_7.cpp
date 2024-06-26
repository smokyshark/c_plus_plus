#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<conio.h>
#include<cmath>
#include "funkcje.h"

#pragma once //wykonaj raz
//#ifndef FUNKCJE_H_
//#define FUNKCJE_H_
//#define ROZMIAR 1000 //definiowanie rozmiaru np. tablicy
//#include "funkcje.h" po deklaracji funkcji i zapisaniu ich do pliku funkcje.h 
using namespace std;
void wyswietl_statystyke();//deklaracja funkcji pozwala na wywolanie funkcji niezaleznie od kolejnosci
//# dyrektywy preprocesora 
//zanim kompilacja parser 
//polecenia preprocesora zaczynaja sie od #
//doklejenie zawartosci plikow, jezeli #include<plik>
void wyswietl_statystyke(float * tablica, int n)
{
	float min = tablica[0];
	float max = tablica[0];
	float suma = 0;
	float srednia;
	for (int i = 0; i<n; i++)
	{
		suma += tablica[i];
		if (tablica[i]>max)
			max = tablica[i];
		if (min > tablica[i])
			min = tablica[i];
	}
	srednia = suma / n;
	cout << "Wartosc srednia  " << srednia << ", minimalna " << min << ", maksymalna " << max << endl;
}

int pobierz_tablice(float * tab)
{
	int n;
	cout << "Podaj ilosc elementow" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> tab[i];
	return n;

}

bool pytanie(char * napis)
{
	char klawisz;
	do
	{
		cout << napis << " (t/n): ";
		cin >> klawisz;
	} while (!(klawisz == 't') || (klawisz == 'T') || (klawisz == 'n') || (klawisz == 'N'));

}
char MENU()
{
	cout << "1 - oblicz Pi" << endl << "2 - Pobierz tablice liczb" << endl <<
		"3 - Wartosc srednia, min, max" << endl << "4 - Sortowanie" << endl <<
		"5 – Anagram" << endl << "6 - Koniec" << endl;
	return 0;
}
double oblicz_PI(float precyzja)
{

	double pi = 0,delta=0;
	int i = 0;
	do
	{
		delta = 4.0*pow(-1, i) / (2 * i + 1);
		pi = pi + delta;
		i++;
	} while (abs(delta) < precyzja);
	return pi;
}
void PI()
{
	int k;
	cout << "podaj ilosc iteracji" << endl;
	cin >> k;
	double pi = oblicz_PI(k);

	cout << pi << endl;
	return;
}

int main()
{
	float tablica[100],tablica2[100];// rozmiar jest zadefiniowany wy¿ej
	int n;
	char wybor;
	
	do
	{
		cout << MENU();
		wybor = _getch();
		switch (wybor)  
		{
		case '1':
		{
					
					break;
		}
		case '2':
		{
					
					break;
		}
		case '3':
		{
					
					break;
		}
		case 6 : 
			if (!pytanie("czy chcesz wyjsc z programu?"))
				
		default:
		{
				   break;
		}

		}
	} while (wybor != '6');

	
		system ("pause");
		return 0;
	
}