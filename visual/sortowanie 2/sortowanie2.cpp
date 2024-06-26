#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
	int tab[4],i;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	for (i = 0; i < 4; i++)
	{
		sort(tab[i], tab[i+1]);
		cout << tab[i];
	}
	

	system("pause");
	return 0;
}