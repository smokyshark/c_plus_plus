#include<iostream>
using namespace std;

int main()
{
	int k, j, i, tab[] = { 9, 8, 3, 10 },pom;
	int n = 4; //liczba elementow
	j = n-1;
	bool przestawiono;
	do
	{
		j--;
		przestawiono = false;
		for (int i = 0; i <= j; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				pom = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = pom;
				przestawiono = true;
			}

		}
	} while (przestawiono);
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << endl;
	}


	system("pause");
	return 0;
}