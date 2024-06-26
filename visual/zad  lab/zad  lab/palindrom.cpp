#include<iostream>
#include<string>
using namespace std;

int main()
{
	string napis;
	cout << "Podaj wyraz:" << endl;
	cin >> napis;
	int x = napis.length();
	bool palindrom = false;
	for (int i = 0; i < x; i++)
	{
		if (napis[i] == napis[x - 1])
		{
			palindrom = true;
		}
		swap(napis[i], napis[x-1]);
		x--;
	}
	if (palindrom == true)
	{
		cout << "Wyraz " << napis << " jest palindromem." << endl;
	}
	else
	{
		cout << "Wyraz od tylu: " << napis << endl;
		cout << "Wyraz " << napis << " nie jest palindromem." << endl;
	}
	system("pause");
	return 0;
}