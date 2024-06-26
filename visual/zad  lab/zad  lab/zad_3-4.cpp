#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int tab[100], n, min, max, i, j;
	double srednia = 0;
	cout << "Podaj n: " << endl;
	cin >> n;
	srand(time(NULL));

	cout << "Nieoposortowane: " << endl;
	for ( i = 0; i < n; i++)
	{
		tab[i] = rand() % 100 ;
		cout << tab[i] << endl;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (tab[j] > tab[j + 1])
			swap(tab[j], tab[j + 1]);
		}
	}

	cout << "Posortowane:" << endl;
	for ( i = 0; i < n; i++)
	{
		cout << tab[i] << endl;
		srednia = srednia + tab[i];
	}

	min = tab[0];
	max = tab[i-1];
	srednia = srednia / n;
	cout << "Max wynosi: " <<max<< endl;
	cout << "Min wynosi: " << min << endl;
	cout << "Srednia wynosi: " << srednia << endl;
	system("pause");
	return 0;

}