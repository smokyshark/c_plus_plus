#include<iostream>
#include<fstream>
#include<iomanip>
//#include vector
using namespace std;
int main()
{
	fstream plik;
	plik.open("dane.txt", ios::in);
	float tab[50];
	//vector <punkt> tab;
	if (plik.good())
	{
		int i = 0;
		while (! plik.eof())
		{
			plik >> tab[i];
			i++;
		}
		for (int i = 0; i < 50; i++)
		{
			cout.setf(ios::fixed);
			cout << setprecision(2) << tab[i] << endl;
		}
		plik.close();
		
	}
	else
	{
		cout << "Nie znaleziono pliku." << endl;
	}
	
	system("pause");
	return 0;
}