#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	float tab[100],max;
	double srednia = 0;
	int i, j, k = 0;
	cout << "Podaj liczby:" << endl;
	do
	{
		scanf("%f", &tab[k]);
		srednia = srednia + tab[k];
		k++;
	}
	while (k<10);
	//while (scanf("%f", &tab[k]) == 1);
	

	cout <<"Suma wynosi: "<< srednia << endl;
	cout << "k wynosi: " << k << endl;
	srednia = srednia / k;
	cout << "Srednia arytmetyczna wynosi: " << srednia << endl;

	for (i = 0; i < k; i++)
	{
		for (j = 0; j < k - 1; j++)
		{
			if (tab[j] > tab[j + 1])
				swap(tab[j], tab[j + 1]);
		}
	}

	cout << "Posortowane:" << endl;
	for (i = 0; i < k; i++)
	{
		cout << tab[i] << endl;
	}

	max = tab[i - 1];
	cout << "Max wynosi: " << max << endl;
	
	system("pause");
	return 0;
}