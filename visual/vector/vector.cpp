#include <iostream>
#include<vector>
#include <list>
#include<map>
#include<chrono>
#include<ctime>
#include<string>
#include "vector_biblioteka.h"

using namespace std;

void zwroc_wektor(vector<int> & v1, vector<int> & v2)
{

	for (int i = 0; i < v2.size(); i++)
	{
		v1.push_back(v2[i]);
	}

	for (int i = 0; i < 5; i++)
	{

		cout << v1[i] << " ";
	}
	cout << endl;

}


void suma_wektorow(vector<int> & v1, vector<int> & v2)
{

	if (v1.size() != v2.size())
	{
		cout << "Wektory nie sa rowne." << endl;
	}
	else
	{
		vector<int>  v3;
		v3.resize(v2.size());
		for (int i = 0; i < v2.size(); i++)
		{
			v3[i] = v1[i] + v2[i];
		}

		/*for (int i = 0; i < v3.size(); i++)
		{

			cout << v3[i] << " ";
		}
		cout << endl;
		*/
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
		case '1'://
		{
					 vector<int> v1{ 1, 2, 3 };
					 vector<int> v2{ 4, 5 };
					
					 zwroc_wektor(v1, v2);
					
					 break;
		}
		case '2'://
		{
					 list<int> lista;
					 int a, b;
					 cout << "Ile el chcesz dodac do listy?" << endl;
					 cin >> b;


					 for (int i = 0; i < b; i++)
					 {
						 cout << "Podaj el" << endl;
						 cin >> a;
						 lista.push_back(a);
					 }


					 cout << "Rozamiar listy: " << lista.size() << endl;

					 cout << "Wartosci listy:" << endl;

					 for (list<int>::iterator itr = lista.begin(); itr != lista.end(); itr++)
					 {
						 cout << *itr << endl;
					 }
					 

					 cout << "Jaka wartosc elementu chcesz usunac?" << endl;
					 cin >> b;
					 for (auto itr = lista.begin(); itr!= lista.end();)
					 {
						 if (*itr == b) itr = lista.erase(itr);
						 else itr++;
					 }
				
					 cout << "Rozamiar listy po usunieciu wartosci " << b << " :" << lista.size() << endl;

					 cout << "Wartosci listy po usunieciu wartosci " << b << " :" << endl;

					 for (list<int>::iterator itr = lista.begin(); itr != lista.end(); itr++)
					 {
						 cout << *itr << endl;
					 }

					 break;
		}
		case '3'://suma 2 wektorow
		{
					 vector<int> v1;
					 vector<int> v2;
					 int a, b;
					 vector<int>  v3;
					 v3.resize(v2.size());


					 cout << "Ile elementow chcesz dodac do wektora?" << endl;
					 cin >> b;


					 cout << "Podaj elementy do wektora nr 1." << endl;

					 for (int i = 0; i < b; i++)
					 {
						 cout << "Podaj element." << endl;
						 cin >> a;
						 v1.push_back(a);
					 }


					 cout << "Rozamiar wektora nr 1: " << v1.size() << endl;

					 cout << "Wartosci wektora nr 1:" << endl;

					 for (int i = 0; i < v1.size(); i++)
					 {
						 cout << v1[i] << endl;
					 }
					
					
					 cout << "Podaj elementy do wektora nr 2." << endl;

					 for (int i = 0; i < b; i++)
					 {
						 cout << "Podaj element." << endl;
						 cin >> a;
						 v2.push_back(a);
					 }


					 cout << "Rozamiar wektora nr 2: " << v2.size() << endl;

					 cout << "Wartosci wektora nr 2:" << endl;

					 for (int i = 0; i < v2.size(); i++)
					 {
						 cout << v2[i] << endl;
					 }


					 if (v1.size() != v2.size())
					 {
						 cout << "Wektory nie sa rowne." << endl;
					 }
					 else
					 {
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
						 suma_wektorow(v1, v2);
						 for (int i = 0; i < v3.size(); i++)
						 {

							 cout << v3[i] << " ";
						 }
						 cout << endl;
						 cout<< endl;
						
						
					 }

					
					

					 break;
		}
		case'4':
		{
				   map <int,string> tekst;
				   int ilosc_liter;
				   int klucz;
				   tekst[0] = "Hello, world! I'm a program.";
				   
				  
				   
				   cout << "Podaj ile liter zaszyfrowac." << endl;
				   cin >> ilosc_liter;
				   cout << "Podaj klucz szyfrowania." << endl;
				   cin >> klucz;
				  

				   break;
		}
		case '5':
		{




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
					   return 0;

				   }

				   break;
		}
		}
	} while (wybor != 'x' && wybor != 'X');


	system("pause");
	return 0;
}