#include<iostream>
using namespace std;
char MENU()
{
	cout << "Menu:" << endl
		<< "1 - zadanie nr 1 ( oblicz wartosc f(p) )" << endl
		<< "2 - zadanie nr 2 (ile cyfr ma liczba)" << endl
		<< "3 - zadanie nr 3 (ilosc samoglosek w txt/)" << endl
		<< "4 - zadanie nr 4 ()" << endl
		<< "c - wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;
	return 0;
}
double oblicz_wzor(double p)
{
	double iloczyn = 1;
	/*for (int n = 2; n < p; n++)
	{
		iloczyn = pow(-n + 1, n) / (2 * p + 1);
	}
	*/
	int n = 2;
	while (n < p)
	{
		iloczyn = pow(-n + 1, n) / (2 * p + 1);
		n++;
	} 
	return iloczyn;
}

int liczba_cyfr(int liczba)
{
	int licznik = 1;
	while (liczba=liczba/10)
	{
		licznik++;
	}

	return licznik;
}

int ilosc_samoglosek(char * tekst)
{
	int licznik = 0;
	for (int i = 0; i < strlen(tekst); i++)
	{
		if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'i' || tekst[i] == 'o' || tekst[i] == 'u' || tekst[i] == 'y')
		{
			licznik++;
		}
	}
	return licznik;
}
/*
int ilosc_samoglosek(string tekst)
{
	int licznik = 0;
	int dl = tekst.length();
	for (int i = 0; i < dl; i++)
	{
		if (tekst[i] == 'a' || tekst[i] == 'e' || tekst[i] == 'i' || tekst[i] == 'o' || tekst[i] == 'u' || tekst[i] == 'y')
		{
			licznik++;
		}
	}
	return licznik;
}
*/
float srednia(float * tab)
{
	float srednia = 0;
	for (int i = 0; i < 20; i++)
	{
		srednia += tab[i];
	}
	srednia = srednia / 20;

	return srednia;
}

float najmniejszy_stopien(float * tab)
{
	
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j<19; j++)
		{
			if (tab[j]>tab[j + 1])
			{
				swap(tab[j], tab[j + 1]);
			}
		}
	}
	/*
	cout <<endl<< "Posortowane:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << tab[i] << endl;
	}
	*/
	float srednia = 0;
	for (int i = 1; i < 20; i++)
	{
		srednia += tab[i];
	}
	srednia = srednia / 19;
	return srednia;
}

int ilosc_slow(char * tekst, int a)
{
	int ilosc = 0;
	int dl_tekstu=0;
	for (int i = 0; i <= strlen(tekst) ; i++)
	{
		
		if (tekst[i] == ' ' || tekst[i] == '\0' )
		{
			if (dl_tekstu > a)
			{
				ilosc++;
				
			}
			dl_tekstu = 0;
		}
		dl_tekstu++;
	}
	return ilosc;
}

/*
int ilosc_slow(string tekst, int a)
{
	int ilosc = 0;
	int dl_tekstu = 0;
	for (int i = 0; i < tekst.length(); i++)
	{
		dl_tekstu++;
		if (tekst[i] == ' ')
		{
			if (dl_tekstu >= a)
			{
				ilosc++;
				dl_tekstu = 0;
			}
		}
	}
	return ilosc;
}*/