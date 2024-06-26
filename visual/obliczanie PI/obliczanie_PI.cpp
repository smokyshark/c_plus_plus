#include<iostream>
using namespace std;
double obliczPi(double dokladnosc)
{
	double pi = 0, pi_poprz = 0, suma = 0;
	unsigned int n = 0;
	do
	{
		pi_poprz = pi;
		suma += pow(-1, n) / (2 * n + 1);
		pi = 4 * suma;
		++n;
	} while (fabs(pi - pi_poprz) > dokladnosc);
	return pi;
}
int main()
{
	int dokladnosc;
	cout << "Podaj dokladnosc"<<endl;
	cin >> dokladnosc;
	cout << " Liczba PI z dokladnoscia do " << dokladnosc << " wynosi: " << obliczPi(dokladnosc) << endl;

	system("pause");
	return 0;
}