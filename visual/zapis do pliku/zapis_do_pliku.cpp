#include<iostream>
#include<ctime>
#include<fstream>

using namespace std;
int main()
{
	fstream plik;
	plik.open("dane.txt", ios::out);
	srand(time(NULL));
	int tab[50];
	for (int i = 0; i < 50; i++)
	{
		tab[i] = rand() % 100;
		plik << tab[i] << " ";
	}
	plik.close();
	system("pause");
	return 0;
}