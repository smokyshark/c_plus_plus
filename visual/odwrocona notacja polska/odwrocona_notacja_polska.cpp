#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	char dzialanie;
	float liczba1, liczba2, liczba3;
	cout << "Podaj dzialanie w odwrotnej notacji polskiej." << endl;
	cout << "+, -, *, /" << endl;
	cin >> liczba1 >> liczba2 >>dzialanie;
	
	switch (dzialanie)
	{
	case '+':
	{
				cout << "Wybrales/as dodawanie." << endl;
				cout << "Wynik dzialania wynosi: " << liczba1 + liczba2 << endl;

				break;
	}
	case '-':
	{
				cout << "Wybrales/as odejmowanie." << endl;
				cout << "Wynik dzialania wynosi: " << liczba1 - liczba2 << endl;
				break;
	}
	case '*':
	{
				cout << "Wybrales/as mnozenie." << endl;
				cout << "Wynik dzialania wynosi: " << liczba1 * liczba2 << endl;
				break;

	}	
	case '/':
	{
					   cout << "Wybrales/as dzielenie." << endl;
					   cout << "Wynik dzialania wynosi: " << liczba1 / liczba2 << endl;
					   break;
	}
	deafault:
	{
		cout << "Zle zapisane dzialanie." << endl;

		break;
	}
	}

	system("pause");
	return 0;
}