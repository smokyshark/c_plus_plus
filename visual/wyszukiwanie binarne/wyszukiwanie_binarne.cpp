#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int l = 0, p, tab[10];

	int szukana, i, srodkowy, n;

	srand(time(NULL));

	cout << "Podaj ilosc liczb w tablicy:" << endl;
	cin >> n;

	p = n;		//prawy element jest ostatnim elementem tablicy
		
	for (i = 0; i < n; i++)		//losowanie liczb
	{
		tab[i] = rand() % 100;
	}

	for (i = 0; i < n; i++)		//sortowanie wylosowanych liczb od najmniejszej do najwiekszej
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (tab[j] > tab[j + 1])
				swap(tab[j], tab[j + 1]);
		}
	}

	cout << "Posortowane:" << endl;
	for (i = 0; i < n; i++)		//wyswietlenie posortowanych wylosowanych liczb z nr 
	{
		cout <<"Nr "<<i+1<<" - "<< tab[i] << endl;
	}
		//szukamy elementu w zbiorze losowych liczb 
	cout << "Podaj element do wyszukania:" << endl;
	cin >> szukana;
	
	while (true)
	{
		if (l > p)	//sprawdzamy czy element lewy jest mniejszy niz prawy, co nie moze sie stac, poniewaz 
					//elementy sa posortowane rosnaca
		{
			cout << "Nie znaleziono podanej liczby" << endl;
			break;
		}
		else;

		srodkowy = (l + p) / 2;		//przypisanie elementu srodkowego

		if (tab[srodkowy] == szukana)	//sprawdzenie czy element srodkowy jest szukana liczba
		{
			cout << "Szukana liczba "<<szukana<<" jest w tym zbiorze pod nr "<< srodkowy+1 << endl;
			break;
		}
		else
		if (tab[srodkowy] < szukana) //sprawdzenie czy element srodkowy jest mniejszy od szukanej liczby 
		{	
			//przypisanie elementowi skrajnie lewemu wartosci elementu srodkowego + 1 
			l = srodkowy + 1;
		}
		else
			//przypisanie elementowi skrajnie prawemu wartosci elementu srodkowego + 1 
			p = srodkowy - 1;
	}

	system("pause");
	return 0;
}