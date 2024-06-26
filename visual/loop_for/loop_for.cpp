#include<iostream>
#include<string>
using namespace std;
int main()
{
	int tab[10],s=0;
	cout << "Podaj 10 liczb naturalnych " << endl;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> tab[i];
		if (tab[i] < 0)
		{
			cout << "Zla liczba, podaj jeszcze raz liczbe naturalna " << endl;
			cin >> tab[i];
		}
		else
			s += tab[i];
	}
	cout << "Suma wynosi " << s << endl;

	system("pause");
return 0;
}