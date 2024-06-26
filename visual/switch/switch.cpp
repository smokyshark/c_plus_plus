#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Podaj n" << endl; 
	cin >> n;
	switch (n)
	{
	case 1:  cout << "wcisnieto 1" << endl;
		break;
	case 2:cout << "wcisnieto 2" << endl;
		break;
	case 3:cout << "wcisnieto 3" << endl;
		break;
	case 4:cout << "wcisnieto 4" << endl;
		break;
	default:
		cout << "Zly wybor " << endl;
	}
	
	/*int a = 0;

	while (a==0)
	{
		cout << "HEHEHEHEHEHEHEHEHEHEHEHEHEHEHEHEHEHEHEH";
	}*/

	/*int a;
	do
	{
		cout << "Wprowadz a" << endl;
		cin >> a ;
		if (!cin.good())
		{
			cin.ignore()
		}
	} while (!cin.good());
	cout << "Podano " << a;
	*/
	system("pause");
	return 0;
}