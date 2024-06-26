#include<iostream>
using namespace std;
bool niezgodny
int main()
{
	/*double czas = 0;
	double dt = 0.0001,czas_old=0,delta_t;
	for (int i = 0; i < 100000000; i++)
	{
	czas_old = czas;
	czas = i*dt + dt;
	delta_t = czas - czas_old;
	}
	cout.precision(15);
	cout << czas <<" dt: " <<dt<<" delta_t: "<<delta_t<< endl;
	//printf("%.15f", dt);
	int a = 1 / 2;
	int b = 1 / 2*3.0 ;
	cout << a <<" "<<b <<endl;*/

	/*int wiek_jk = 19, wiek_ojca = 45;
	float k = (float)wiek_ojca / wiek_jk;
	cout << k << endl;*/
	/*
	for (float i = 0; i < 10; i+=1.0)
	{
	cout << (int)i << endl;
	}
	*/



	/*int i = 0;
	char napis1[20] = "haslo";
	char napis2[20];
	int n = strlen(napis1);
	//strcpy(napis2, napis1);
	for (int i = 0; i <= n; i++)
	{
		napis2[n - i - 1] = napis1[i];
	}
	napis2[n] = 0;
	cout << napis2 << endl;
	//cout << "Podaj haslo: " << endl;
	//cin >> napis2;
	int n1 = strlen(napis1);
	int n2 = strlen(napis2);

	//if (strcmp(napis1, napis2) == 0)//funkcja sprawdza czy s¹ takie same napisy

	if (n1 == n2)
	{
		bool niezgodny = false;
		for (int i = 0; i < n1 && niezgodny == false; i++)
		{
			if (napis1[i] != napis2[i])
			{
				niezgodny = true;
				//break;
			}
		}
		if (niezgodny == false)
		{
			cout << "Twoje haslo jest poprawne" << endl;
		}
	}
	else
	if (napis1[i-1] < napis2[i-1])
	{
		cout << "Napis1 kest mniejszy" << endl;
	}
	else
	{
		cout << "Napis2 jest mniejszy" << endl;
	}
	*/







	system("pause");
	return 0;
}