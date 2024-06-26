#include<iostream>
#include<string>
using namespace std;

struct osoba
{
	char imie[20];
	char nazwisko[20];
	int wiek;
	double waga;
	float wzrost;
};
void MENU()
{
	cout << "<<<<<<      MENU       <<<<<<" << endl
		<< "1 - zadanie nr 1 " << endl
		<< "2 - zadanie nr 2 " << endl
		<< "3 - zadanie nr 3 " << endl
		<< "4 - zadanie nr 4 " << endl
		<< endl;
}

void printOsoba(osoba osoba1, osoba osoba2, osoba osoba3)
{
	cout << "Imie nr 1: " << osoba1.imie << endl;
	cout << "Nazwisko nr 1: " << osoba1.nazwisko << endl;
	cout << "Wiek nr 1: " << osoba1.wiek << endl;
	cout << "Waga nr 1: " << osoba1.waga<< endl;
	cout << "Wzrost nr 1: " << osoba1.wzrost << endl;


	cout << "Imie nr 2: " << osoba2.imie << endl;
	cout << "Nazwisko nr 2: " << osoba2.nazwisko << endl;
	cout << "Wiek nr 2: " << osoba2.wiek << endl;
	cout << "Waga nr 2: " << osoba2.waga << endl;
	cout << "Wzrost nr 2: " << osoba2.wzrost << endl;


	cout << "Imie nr 3: " << osoba3.imie << endl;
	cout << "Nazwisko nr 3: " << osoba3.nazwisko << endl;
	cout << "Wiek nr 3: " << osoba3.wiek << endl;
	cout << "Waga nr 3: " << osoba3.waga << endl;
	cout << "Wzrost nr 3: " << osoba3.wzrost << endl;

	cout << endl;
}


int main()
{
	char wybor;
	do{
		 MENU();
		 cin >> wybor;
		 switch (wybor)
		 {
		 case '1':
		 {
					 osoba osoba1 = { "Janek", "Kowalski", 28, 70, 192 };
					 osoba osoba2 = { "Bartek", "Klinicki", 19, 78, 175 };
					 osoba osoba3;
					 cout << "Podaj dane uzytkownika." << endl;
					 cout << "Podaj imie." << endl;
					 cin >> osoba3.imie;
					 cout << "Podaj nazwisko." << endl;
					 cin >> osoba3.nazwisko;
					 cout << "Podaj wiek." << endl;
					 cin >> osoba3.wiek;
					 cout << "Podaj wage." << endl;
					 cin >> osoba3.waga;
					 cout << "Podaj wzrost." << endl;
					 cin >> osoba3.wzrost;

					 printOsoba(osoba1, osoba2, osoba3);


					 break;
		 }

		 case '2':
		 {




					 break;
		 }

		 case '3':
		 {




					 break;
		 }

		 case '4':
		 {




					 break;
		 }
		 default:
		 {
					if (wybor != 'x' && wybor != 'X')
					{
						cout << "Zly wybor" << endl;
					}
					else
					{
						return 0;

					}

					break;
		 }
		 }

	} while (wybor != 'x' && wybor != 'X');
	system("pause");
	return 0;
}