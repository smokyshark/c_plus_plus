#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<ctime>
#include<string>
#include<iomanip>
using namespace std;
int main()
{	
	//Program 1
	/*
	double a=0, b=0,c=0,obwodp,polep,polet,obwodt,p;

	do
	{
		cout << "Podaj dlugosci bokow prostokata \nPodaj bok a: " << endl;
		cin >> a ;
		cout << "Podaj bok b: " << endl;
		cin >> b;
		if (a > 0 && b > 0)
		{
			obwodp = 2 * (a + b);
			polep = a*b;

			cout << "Pole prostokata wynosi: " << polep << " a jego obwod: " << obwodp << endl;
		}
		else
		{
			cout << "Nie moze powstac prostokat o takich bokach " << endl;
		}
	} while (a<0 || b<0);

		
	do
	{
		cout << "Podaj dlugosci bokow trojkata \nPodaj bok a: " << endl;
		cin >> a;
		cout << "Podaj bok b: " << endl;
		cin >> b;
		cout << "Podaj bok c: " << endl;
		cin >> c;
		if (a + b > c && a + c>b && b + c > a)
		{

			p = (a + b + c) / 2;
			polet = sqrt(p*(p - a)*(p - b)*(p - c));
			obwodt = a + b + c;

			cout << "Obwod trojkata wynosi: " << obwodt << " ,a jego pole: " << polet << endl;
		}
		else
		{
			cout << "Nie moze powstac trojkat o takich bokach " << endl;
		}
	} while (a < 0 || b < 0 || c < 0);
	
	double wartosc_cos_alfa, wartosc_cos_beta, wartosc_cos_delta;
	double stopien_alfa, stopien_beta, stopien_delta;
	wartosc_cos_alfa = (pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b*c);
	wartosc_cos_beta = (pow(a, 2) + pow(c, 2) - pow(b, 2)) / (2 * a*c);
	wartosc_cos_delta = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a*b);

	cout << "Wartosc cos_alfa wynosi: "<<wartosc_cos_alfa << endl;
	cout << "Wartosc cos_beta wynosi: " << wartosc_cos_beta << endl;
	cout << "Wartosc cos_delta wynosi: " << wartosc_cos_delta << endl;
	stopien_alfa = acos(wartosc_cos_alfa)*180/M_PI;
	stopien_beta = acos(wartosc_cos_beta) * 180 / M_PI;
	stopien_delta = acos(wartosc_cos_delta) * 180 / M_PI;

	cout << "Kat alfa wynosi: "<<stopien_alfa<<endl;
	cout << "Kat beta wynosi: " << stopien_beta<< endl;
	cout << "Kat delta wynosi: " << stopien_delta << endl;
	*/

	//Program 2
	/*
	int c, d;
	double x, y,w=0;

	cout << "Dla liczb o typie integer:" << endl;
	cout << "Podaj pierwsza liczbe " << endl;
	cin >> c;
	cout << "Podaj druga liczbe " << endl;
	cin >> d;
	w = c + d;
	cout << "Wynik dodawania liczb " << c << " i " << d << " wynosi: " << w<<endl;
	w = c - d;
	cout << "Wynik odejmowania liczb " << c << " - " << d << " wynosi: " << w << endl;
	w = d-c;
	cout << "Wynik odejmowania liczb " << d << " - " << c << " wynosi: " << w << endl;
	w = c * d;
	cout << "Wynik mnozenia liczb " << c << " * " << d << " wynosi: " << w << endl;
	w = c / d;
	cout << "Wynik dzielenia liczb " << c << " : " << d << " wynosi: " << w << endl;
	w = d / c;
	cout << "Wynik dzielenia liczb " << d << " : " << c << " wynosi: " << w << endl<<endl<<endl;




	cout << "Dla liczb o typie double:" << endl;
	cout << "Podaj pierwsza liczbe " << endl;
	cin >> x;
	cout << "Podaj druga liczbe " << endl;
	cin >> y;
	w = x + y;
	cout << "Wynik dodawania liczb " << x << " i " << y << " wynosi: " << w << endl;
	w = x - y;
	cout << "Wynik odejmowania liczb " << x << " - " << y << " wynosi: " << w << endl;
	w = y - x;
	cout << "Wynik odejmowania liczb " << y << " - " << x << " wynosi: " << w << endl;
	w = x * y;
	cout << "Wynik mnozenia liczb " << x << " * " << y << " wynosi: " << w << endl;
	w = x / y;
	cout << "Wynik dzielenia liczb " << x << " : " << y << " wynosi: " << w << endl;
	w = y / x;
	cout << "Wynik dzielenia liczb " << y << " : " << x << " wynosi: " << w << endl;

	*/

	//Program 3
	

/*

int n=0,b=0;
cout << "Podaj liczbe \n";
cin >> n;

cout << "Pre inkrementacja podanej liczby to: "<<++n << endl;
cout << "Wartosc n wynosi: "<<n << endl;

cout << "Post inkrementacja podanej liczby to: " << n++ << endl;
cout << "Wartosc n wynosi: " << n << endl;

cout << "Pre dekrementacja podanej liczby to: " << --n << endl;
cout << "Wartosc n wynosi: " << n << endl;

cout << "Post dekrementacja podanej liczby to: " << n-- << endl;
cout << "Wartosc n wynosi: " << n << endl;
*/



//Program 4


string imie1, imie2, nazwisko, taknie, imie_ojca, imie2_ojca,  imie_matki, imie2_matki;
string nazwisko_rodowe, miejsce_urodzenia,  miejsce_zamieszkania;
string kraj_zamieszkania, kraj_urodzenia;
int rok_urodzenia, miesiac_urodzenia, dzien_urodzenia, wiek_matki, wiek_ojca,dni;
cout << "Pierwsze imie: ";
cin >> imie1;
cout << "Masz drugie imie? (tak/nie) ";
cin >> taknie;

if (taknie == "tak")
{
	cout  << "Podaj drugie imie ";
	cin >> imie2;
}
else;
cout << "Podaj swoje nazwisko ";
cin >> nazwisko;

cout << "Podaj kraj zamieszkania ";
cin >> kraj_zamieszkania;

cout << "Podaj miejsce zamieszkania ";
cin >> miejsce_zamieszkania;

cout << "Podaj pierwsze imie ojca ";
cin >> imie_ojca;

cout << "Czy twoj ojciec ma drugie imie? (tak/nie) ";
cin >> taknie;

if (taknie == "tak")
{
	cout << "Podaj drugie imie ojca ";
	cin >> imie2_ojca;
}
else;

cout << "Podaj wiek ojca ";
cin >> wiek_ojca;

cout << "Podaj pierwsze imie matki ";
cin >> imie_matki;

cout << "Czy twoja matka ma drugie imie? (tak/nie) ";
cin >> taknie;

if (taknie == "tak")
{
	cout << "Podaj drugie imie matki ";
	cin >> imie2_matki;
}
else;

cout << "Podaj wiek matki ";
cin >> wiek_matki;

cout << "Podaj nazwisko rodowe matki ";
cin >> nazwisko_rodowe;

cout << "Podaj swoj kraj urodzenia ";
cin >> kraj_urodzenia;

cout << "Podaj swoje miejsce urodzenia ";
cin >> miejsce_urodzenia;

cout << "Podaj rok urodzenia ";
cin >> rok_urodzenia;

cout << "Podaj miesiac urodzenia ";
cin >> miesiac_urodzenia;

cout << "Podaj dzien urodzenia ";
cin >> dzien_urodzenia;

int lata,lata_ojca = 0, lata_matki=0;
time_t wsk_sekund;
time(&wsk_sekund);
lata = localtime(&wsk_sekund)->tm_year - rok_urodzenia + 1900;
lata_ojca = wiek_ojca-lata;
lata_matki = wiek_matki-lata;

cout << "Obywatel "<<kraj_urodzenia<<" "<<imie1<<" "<<imie2<<" "<<nazwisko<<" zamieszkaly w "<<kraj_zamieszkania<<" w "<<
miejsce_zamieszkania << " urodzony w " << miejsce_urodzenia << " " <<lata<< " lat temu. " << "Jego matka, " << imie_matki <<
" "<<imie2_matki << " (z rodu " << nazwisko_rodowe << ") miala wtedy " <<lata_matki<< " lat, a jego ojciec mial " <<lata_ojca<<
" lat."<<endl;

struct  tm * aktualny_czas;
time_t czas;
time(&czas);
aktualny_czas = localtime(&czas);
dni = localtime(&czas)->tm_yday + (lata - 1) * 365 - dzien_urodzenia;

for (int i = rok_urodzenia; i <= localtime(&czas)->tm_year + 1900; i++)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	{
		dni += 1;
	}
}
if (miesiac_urodzenia == 12)
{
	dni = dni + 31;
}

else if (miesiac_urodzenia == 11)
{
	dni = dni + 30 + 31;

}
else if (miesiac_urodzenia == 10)
{
	dni = dni + 31 + 30 + 31;
}
else if (miesiac_urodzenia == 9)
{
	dni = dni + 31 + 30 + 31 + 30;

}
else if (miesiac_urodzenia == 8)
{
	dni = dni + 31 + 30 + 31 + 30 + 31;

}
else if (miesiac_urodzenia == 7)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30;
}
else if (miesiac_urodzenia == 6)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31;

}
else if (miesiac_urodzenia == 5)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31;

}
else if (miesiac_urodzenia == 4)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30;


}
else if (miesiac_urodzenia == 3)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;

}
else if (miesiac_urodzenia == 2)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 28;

}
else if (miesiac_urodzenia == 1)
{
	dni = dni + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 28 + 31;

}

double x = 0, y = 0;

x = (double)wiek_ojca/lata;

y = (double)wiek_matki / lata;

cout << nazwisko << " " << imie1 << " " << imie2 << " do "<<asctime(aktualny_czas)<<" przezyl " << dni << " dni. Jego ojciec "<<

setprecision(3)<<imie_ojca<<" jest "<<x<<" razy starszy, a jego matka "<<imie_matki<<" "<<y<<" razy starsza."<< endl;

int wiek_rodziny = wiek_matki + wiek_ojca + lata;

if (wiek_rodziny > 100)
{
	
	cout << "To jest stara rodzina, poniewaz razem maja " << wiek_rodziny << " lat." << endl;
}
else
{
	cout << "To jest mloda rodzina, poniewaz razem maja " << wiek_rodziny << " lat." << endl;
}

//Program nr 5



/*
int liczba;
cout << "Podaj liczbe " << endl;
cin >> liczba;
cout.setf(ios::oct, ios::basefield);
cout << "Podana liczba w systemie osemkowym wynosi: " << liczba << endl;
cout.setf(ios::dec, ios::basefield);
cout << "Podana liczba w systemie dziesietnym wynosi: " << liczba << endl;
cout.setf(ios::hex, ios::basefield);
cout << "Podana liczba w systemie szesnastkowym wynosi: " << liczba << endl;

*/
	system("pause");
	return 0;
}