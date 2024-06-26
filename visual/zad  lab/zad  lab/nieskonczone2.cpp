#include<iostream>
#include<string>
using namespace std;
double f(double x)
{
	return -x*x - x + 10;
}
int main()
{
	float xp, xk, h, calka,x[10000];//xp-x poczatkowe, xk - x koncowe, h - wysokosc
	int n;// n - liczba na ktora dzielimy przedzial
	xp = -2;
	xk = 1;
	n = 1000;

	h = (xk - xp) / (float)n;
	cout << "Krok h: " << h << endl;
	calka = 0;
	for (int i = 1; i < n; i++)
	{
		calka = calka + (xk - xp)*(f(xp) + f(x[i])) / (2 * i);
		xp = x[i];
	}
	calka = calka + f(xp) / 2;
	calka = calka + f(xk) / 2;
	//calka *= h;
	cout << "Wynik calkowania wynosi: " << calka << endl;
	system("pause");
	return 0;

}