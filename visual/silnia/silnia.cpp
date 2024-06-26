#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int  n, i = 0;
	long long int  silnia = 1;
	cout << "Podaj liczbe do silni " << endl;
	cin >> n;
	if (n == 0)
	{
		cout << "Silnia wynosi: " << silnia << endl;
	}
	else
	if (n < 0)
	{
		cout << "Zla liczba" << endl;
	}
	else
	{
		for (i = 1; i<=n ; i++)
		{
			silnia *= i;
		}
		cout << "Silnia wynosi: " << silnia << endl;
	}


	system("pause");
	return 0;
}