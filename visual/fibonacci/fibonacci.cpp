#include <iostream>
#include <cstdlib>

using namespace std;

unsigned int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int ilosc;

	cout << "Podaj ile wyrazow wypisac:" << endl;
	cin >> ilosc;

	for (int i = 0; i <= ilosc; i++)
		cout << fib(i) << ", ";

	system("PAUSE >nul");
	return(0);
}