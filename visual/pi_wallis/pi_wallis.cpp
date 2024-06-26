#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

double PI(double n)
{
	double mianownik, licznik, i;
	double iloczyn = 1;


	for (i = 1; i <= n; i++)
	{
		licznik = (4 * i*i);
		mianownik = ((2 * i) - 1)*((2 * i) + 1);
		iloczyn *= (licznik / mianownik);

	}


	return (2 * iloczyn);
};


int main()
{
	cout << "Wzor Wallisa na PI" << endl << endl;

	unsigned int n = 1000;
	cout.precision(3);
	cout << endl;
	cout << PI(n) << endl;

	system("PAUSE");
	return EXIT_SUCCESS;
}