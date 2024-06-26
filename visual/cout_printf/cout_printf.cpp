#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include <iomanip>
using namespace std;
int main()
{
	int i, j, k;
	
	float tab[9][5] =
	{
		{ 1, 2, 3, 4, 5 },
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 16, 17, 18, 19, 20 },
		{ 21, 22, 23, 24, 25 },
		
		{ 226, 27, 28, 29, 30 },
		{26, 27, 28, 29, 30},
		{26, 27, 28, 29, 30},
		{26, 27, 28, 29, 30}
	};
	
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 5; j++)
		{
			
			cout.width(8);//zarezerwowane miejsce dla liczby
			cout.setf(ios::fixed);
			cout.precision(5);
			cout << tab[j][j];
			//printf("%8.4f",  tab[i][j])<<" ";
			//printf("%.4f", printf("%.4f", cout << tab[i][j]));
			//cout<<printf("%.4f", cout << printf("%.4f", cout << printf("%.4f", cout << tab[i][j])));
			//printf("%.4f ", tab[i][j]);
			
		}
		cout << endl;
	}
	int suma=0;
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			suma += tab[i][j];
		}
	}
	cout << "Suma: " << suma << endl;
	/*
	float tab[3][4] =
	{
		{ 1, 2, 3, 4 },
		{ 3, 4, 8, 9 },
		{ 3, 2, 3, 1 }
	};
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{

			cout.width(8);
			//cout.precision(5);
			cout<<printf("%.4f",  tab[i][j])<<" ";
			//printf("%.4f", printf("%.4f", cout << tab[i][j]));
			//cout << printf("%.4f", cout << printf("%.4f", cout << printf("%.4f", cout << tab[i][j])));
			//printf("%.4f ", tab[i][j]);

		}
		cout << endl;
	}
	*/
	system("pause");
}