#include<iostream>
using namespace std;
int main()
{
	int i,tab[255];
	char klawisz;
	cout << "Tablica ASCII:" << endl;
	for (i = 1; i <= 255; i++)
	{
		tab[i] = i;
		cout << "Nr " << tab[i] << " znak: " << (char)tab[i] << endl;
		if (i%40==0)
		{
			cout << "Nacisnij klawisz, aby kontynuowac" << endl;
			cin >> klawisz;
		}
		
	}
	system("pause");
	return 0;
}