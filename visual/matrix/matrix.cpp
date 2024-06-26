#include<iostream>
#include<ctime>
using namespace std;
int main()
{	
	srand(time(NULL));
	int a;
	while (true)
	{
		a = rand() % 100;
		cout << a;
	}
}