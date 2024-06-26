#include <iostream>
#include<vector>
#include <list>
using namespace std;
char MENU()//wyswietla menu
{
	cout << "Menu:" << endl
		<< "1 - zadanie nr 1 (polaczenie dwoch wektorow)" << endl
		<< "2 - zadanie nr 2 (wpisanie 10 elementow do listy i usuniecie podanej wartosci z listy)" << endl
		<< "3 - zadanie nr 3 (dodanie odpowiadajacych sobie elementow dwoch wektorow)" << endl
		<< "c - wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;
	return 0;
}

//polaczenie 2 wektorow
void zwroc_wektor(vector<int> & v1, vector<int> & v2)
{
	cout << "Polaczenie wektora : ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << " oraz wektora nr 2: ";
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << " wynosi: ";
	for (int i = 0; i < v2.size(); i++)
	{
		v1.push_back(v2[i]);
	}

	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

}

//dodanie do siebie 2 wektor�w
void suma_wektorow(vector<int> & v1, vector<int> & v2)
{

	if (v1.size() != v2.size())
	{
		cout << "Wektory nie sa rowne." << endl;
	}
	else
	{
		vector<int>  v3;
		v3.resize(v2.size());//stworzenie nowego wektora o rozmiarze takim samym jak wektor nr 2
		//dodawanie do siebie elementow wektora o takim samym identyfikatorze
		for (int i = 0; i < v2.size(); i++)
		{
			v3[i] = v1[i] + v2[i];
		}
		cout << "Suma wektora nr 1: ";
		for (int i = 0; i < v1.size(); i++)
		{
			cout << v1[i] << " ";
		}
		cout << " oraz wektora nr 2: ";
		for (int i = 0; i < v1.size(); i++)
		{
			cout << v2[i] << " ";
		}
		cout << " wynosi: ";
		for (int i = 0; i < v3.size(); i++)
		{

			cout << v3[i] << " ";
		}
		cout << endl;
	}

}

int main()
{
	char wybor;

	do
	{
		cout << endl;
		cout << MENU();
		cin >> wybor;

		switch (wybor)
		{
		case '1'://po��czenie 2 wektor�w 
		{
			vector<int> v1{ 1, 2, 3 };
			vector<int> v2{ 4, 5,6 
			zwroc_wektor(v1, v2)
			break;
		}
		case '2'://wpisanie do listy, usuwanie podanej wartosci
		{
			list<int> lista;
			int a, b;
			cout << "Ile elementow chcesz dodac do listy?" << endl;
			cin >> b;
			//wpisanie b elementow do listy
			for (int i = 0; i < b; i++)
			{
			 	cout << "Podaj el" << endl;
			 	cin >> a;
			 	lista.push_back(a);
			}
			cout << "Rozamiar listy: " << lista.size() << endl;
			// auto = list<int>::iterator;
			// wypisanie wartosci listy
			cout << "Wartosci listy:" << endl;
			for ( auto itr = lista.begin(); itr != lista.end(); itr++)
			{
			 cout << *itr << endl;
			}	 
			cout << "Jaka wartosc elementu chcesz usunac?" << endl;
			cin >> b;
			//usuwanie wartosci listy
			for (auto itr = lista.begin(); itr != lista.end();)
			{
			 if (*itr == b)
			 {
				 itr = lista.erase(itr);
			 }
			 else
			 {
				 itr++;
			 }
			}
			cout << "Rozamiar listy po usunieciu wartosci " << b << " :" << lista.size() << endl;
			cout << "Wartosci listy po usunieciu wartosci " << b << " :" << endl;
			for (auto itr = lista.begin(); itr != lista.end(); itr++)
			{
			 cout << *itr << endl;
			}
			break;
		}
		case '3'://dodanie do siebie 2 wektor�w
		{
			vector<int> v1{ 1, 2, 3, 4, 5 };
			vector<int> v2{ 6, 7, 8, 9, 10 
			suma_wektorow(v1, v2
			break;
		}
		case 'c':
		{
			system("cls");
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
			   return 0
			
			break;
		}
		}
	} while (wybor != 'x' && wybor != 'X');
	system("pause");
	return 0;
}