#include<iostream>
using namespace std;
int main()
{
	int liczba;
	cout << "Podaj liczbe " << endl;
	cin >> liczba;
	cout.setf(ios::oct, ios::basefield);
	cout << "Podana liczba w systemie osemkowym wynosi: " << liczba << endl;
	cout.setf(ios::dec, ios::basefield);
	cout << "Podana liczba w systemie dziesietnym wynosi: " << liczba << endl;
	cout.setf(ios::hex, ios::basefield);
	cout << "Podana liczba w systemie szesnastkowym wynosi: " << liczba << endl;


	system("pause");
	return 0;
}