#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
	int a=3, b=4;
	
	for (int i = 0; i < 2; i++)
	{
		sort(a, b);
	}
	cout << a<<" " <<b << endl;





	system("pause");
	return 0;
}