#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<string>
#include<fstream>
using namespace std;
struct sLisc{
	string wyraz;
	int licznik;
	sLisc *P;
	sLisc *L;
};
void wyswietl(sLisc *el)
{
	if (el->L!= NULL)
	{
		wyswietl(el->L);
		cout << el->wyraz << " " << el->licznik << endl;
	}
	if (el->P != NULL)
	{
		wyswietl(el->P);
	}
}

void dodaj(sLisc* el, char *wyraz)
{
	if (el->wyraz == wyraz)
	{
		el->licznik++;
		return;
	}
	if (el->wyraz < wyraz)
	{
		if (el->L!=NULL)
		{
			dodaj(el->L, wyraz);
		}
		else
		{
			el->L = new sLisc;
			el->L->wyraz = wyraz;
			el->L->licznik = 1;
			el->L->L = NULL;
			el->L->P = NULL;
		}
	}
}
int main()
{
	int wystapienia[255];
	fstream plik;
	plik.open("sdf.txt", ios::in);
	fseek(plik, 0, SEEK_END);
	int size = ftell(plik);
	fseek(plik, 0, SEEK_SET);

	char * text = new char[size];
	fread(text, 1, size, plik);
	for (int i = 0; i < size; i++)
	{
		cout << text[i];
		wystapienia[text[i]]++;
	}
	for (int i = 0; i < 255; i++)
	{
		if ()
	}
	system("pause");
	return 0;
}

int drzewo()
{
	sLisc *root = NULL;
	ifstream plik;
	string tekst;
	plik.open("sdf.txt", ios::in);
	while (!plik.eof())
	{
		char napis[100];
		//plik >> napis;
		//cout << tekst;
		fscanf(plik."%s", napis);
		if (root == NULL)
		{
			root = new sLisc;
			root->wyraz = napis;
			root->licznik = 1;
			root->L = NULL;
			root->P = NULL;

		}
		else
		{
			dodaj(root.napis);
		}
	}
	plik.close();
	system("pause");
	return 0;
}