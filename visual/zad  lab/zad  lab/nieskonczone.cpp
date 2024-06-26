#include<iostream>
#include<string>
using namespace std;

int main()
{
	string tekst_t, tekst_f, tekst_r;
	int i,n;
	cout << "Podaj tekst t" << endl;
	cin >> tekst_t;
	cout << "Podaj tekst f" << endl;
	cin >> tekst_f;
	cout << "Podaj tekst r" << endl;
	cin >> tekst_r;
	if (tekst_r.length() > tekst_f.length())
	{
		n = tekst_r.length();
	}
	else
	{
		n = tekst_f.length();
	}
	for (i = 0; i < n ; i++)
	{
		if (tekst_f[i] == tekst_r[i])
		{
			tekst_r[i] = tekst_t[i];
		}
	}
	cout << tekst_t << endl;
	cout << tekst_f << endl;
	cout << tekst_r << endl;

	system("pause");
	return 0;

}