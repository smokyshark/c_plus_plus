#include <iostream>
#include<string>


using namespace std;


char MENU()//wyswietla menu
{
	cout << "Menu:" << endl
		<< "8 - zadanie nr 8 ( obliczanie miejsc zerowych funkcji ax^2 + bx + c = 0 )" << endl
		<< "c - wyczysc ekran" << endl
		<< "x / X - Wyjscie" << endl;
	return 0;
}

struct funkcja//wspolczynniki funkcji ax^2 + bx + c
{
	double a;
	double b;
	double c;
};
struct rozwiazania_urojone
{
	string x1;
	string x2;
};

struct rozwiazania_rzeczywiste
{
	double x1;
	double x2;
};

void oblicz_miejsca_zerowe(double a, double b, double c)
{
	double delta;
	delta = pow(b, 2)-4*a*c;
	double p = -b / 2 * a;
	double q = -delta / 4 * a;
	rozwiazania_rzeczywiste rozwiazanie;
	rozwiazania_urojone rozwiazanie_zespolone;
	cout << "Delta wynosi: " << delta << endl;
	if (a != 0)
	{
		if (delta < 0)
		{
			cout << "Brak rozwiazan w zbiorze liczb rzeczywistych." << endl;
			delta = -delta;
			double pierwiastek_delta = sqrt(delta);
			rozwiazanie.x1 = -b/(2*a);
			rozwiazanie.x2 = -b/(2*a);

			string pierw_delta = to_string(pierwiastek_delta)+'j';
			//cout << "Pierwiastek z delty: " <<pierw_delta << endl;
			pierwiastek_delta = pierwiastek_delta / (2 * a);
			pierw_delta = to_string(pierwiastek_delta) + 'j';
			
			cout << "Rowananie " << a << "x^2 + " << b << "x + " << c << " = 0 ma 2 rozwiazania: " << rozwiazanie.x1 << " + "
				<< pierw_delta << " i " << rozwiazanie.x2 << " - " << pierw_delta << "." << endl;
		}

		else if (delta == 0)
		{
			rozwiazanie.x1 = p;
			rozwiazanie.x2 = p;
			cout << "Rownanie " << a << "x^2 + " << b << "x + " << c << " = 0 ma 1 rozwiazanie: " << rozwiazanie.x1 << "." << endl;
			if (rozwiazanie.x1 < 0)
			{
				cout << "Postac kanoniczna tego rownania to: " << a << "(x+" << -rozwiazanie.x1 << ")^2." << endl;
			}
			else
			{
				cout << "Postac kanoniczna tego rownania to: " << a << "(x+" << rozwiazanie.x1 << ")^2." << endl;
			}
		}

		else//(if(delta>0)
		{
			rozwiazanie.x1 = (-b - sqrt(delta)) / 2 * a;
			rozwiazanie.x2 = (-b + sqrt(delta)) / 2 * a;
			cout << "Rowananie " << a << "x^2 + " << b << "x + " << c << " = 0 ma 2 rozwiazania: " << rozwiazanie.x1 << " i " 
				<< rozwiazanie.x2 << "." << endl;

			if (rozwiazanie.x1 < 0 && rozwiazanie.x2 < 0)
			{
				cout << "Postac kanoniczna tego rownania to: " << a << "(x+" << -rozwiazanie.x1 << ")(x+" << -rozwiazanie.x2 << ")." << endl;
			}
			else if (rozwiazanie.x1 < 0 && rozwiazanie.x2 > 0)
			{
				cout << "Postac kanoniczna tego rownania to: " << a << "(x+" << -rozwiazanie.x1 << ")(x-" << rozwiazanie.x2 << ")." << endl;
			}
			else if (rozwiazanie.x1 > 0 && rozwiazanie.x2 < 0)
			{
				cout << "Postac kanoniczna tego rownania to: " << a << "(x-" << rozwiazanie.x1 << ")(x+" << -rozwiazanie.x2 << ")." << endl;
			}
			else if (rozwiazanie.x1 > 0 && rozwiazanie.x2 > 0)
			{
				cout << "Postac kanoniczna tego rownania to: " << a << "(x-" << rozwiazanie.x1 << ")(x-" << rozwiazanie.x2 << ")." << endl;
			}
		}
	}

	else//if(a==0)
	{
		if (b != 0)
		{

			rozwiazanie.x1 = -c / b;
			cout << "Rowananie " << b << "x + " << c << " = 0 ma 1 rozwiazanie: " << rozwiazanie.x1 << "." << endl;
		}
		else if (c != 0)//if(b==0)
		{
			cout << "Rownanie " << c << " = 0 nie ma rozwiazan." << endl;
		}
		else//if(c==0)
		{
			cout << "Rownanie " << c << " = 0 ma nieskonczenie wiele rozwiazan." << endl;
		}
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
		
		case '8'://
		{
					 funkcja kwadratowa;
					 cout << "Podaj wspolczynniki do funkcji ax^2 + bx + c " << endl;

					 cout << "Podaj a" << endl;
					 cin >> kwadratowa.a;

					 cout << "Podaj b" << endl;
					 cin >> kwadratowa.b;

					 cout << "Podaj c" << endl;
					 cin >> kwadratowa.c;


					 oblicz_miejsca_zerowe(kwadratowa.a, kwadratowa.b, kwadratowa.c);

					 cout << endl;

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