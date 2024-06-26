#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a = 6, b = 8, c = 1, i = 1, x = 0, y = 0;
	while (true)
	{
		x = (a + b) % 10;
		y = (b + c) % 10;
		i++;
		a = x;
		b = (x + y) % 10;
		c = y;
		i++;
		if (i == 2017)
		{
			cout << a << " " << b << " " << c << endl;
			system("pause");
			return 0;
		}
	}
}