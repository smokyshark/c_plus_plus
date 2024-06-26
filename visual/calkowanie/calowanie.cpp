#include<iostream>
using namespace std;
double f(double x)
{
	return -x*x - x + 10;
}
int main()
{
	float xp, xk, h, calka;
	int n;
	xp = -2;
	xk = 1;
	n = 10000;

	h = (xk - xp) / (float)n;
	cout << "Krok h: " << h << endl;
	calka = 0;
	for (int i = 0; i < n; i++)
	{
		calka = calka + f(xp + i*h);

	}
	calka = calka + f(xp) / 2;
	calka = calka + f(xk) / 2;
	calka *= h;
	cout << "Wynik calkowania wynosi: " << calka << endl;
	system("pause");
	return 0;

}