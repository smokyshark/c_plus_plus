#include<iostream>
#include<cstdlib>
#include<string>
#include<cmath>
#include<Windows.h>
using namespace std;

int main()
{
	int u, v;
	cout << "Podaj pierwsza liczbe "<<endl;
	cin >> u;
	cout << "Podaj druga liczbe "<<endl;
	cin >> v;
	
	if (u == v)
	{
		cout << "Najwiekszy wspolny dzielnik to: " << u<<endl;
	}
	else
	while (u != v)
	{
		if (u > v)
		{
			u = u - v;
		
		}
		else if (v > u)
		{
			v = v - u;
			
		}
	}
	cout << "Najwiekszy wspolny dzielnik to: " << u << endl;




	system("pause");
	return 0;
}