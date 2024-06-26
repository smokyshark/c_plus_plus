#include<iostream>
#include<string>
using namespace std;

int main()
{
int wys, szer;
cout << "Podaj wysokosc" << endl;
cin >> wys;
int l = 0;
for (int i = 1; i <= wys-1; i++)
{
	for (int k = 1; k <= wys-i-1; k++)
	{
		cout << " ";
		
	}
	
	for (int j = 0; j < 2*i-1; j++)
	{

		cout << "*";
	}
	
	cout << endl;
}



//cout << endl;



system("pause");
return 0;
}