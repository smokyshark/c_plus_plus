#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	time_t wsk_sekund;
	time(&wsk_sekund);
	lata = localtime(&wsk_sekund)->tm_year +
	for (int i = 0; i <= localtime(&wsk_sekund)->tm_year; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			cout << i << endl;
		}
	}




	system("pause");
	return 0;
}