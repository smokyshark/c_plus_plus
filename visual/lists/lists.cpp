#include <iostream>
#include<vector>
#include <list>
#include<chrono>
#include<ctime>
using namespace std;


int max(vector<int> v)
{
	int max, min;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size() - 1; j++)
		{
			if (v[j] > v[j + 1])
			{
				swap(v[j], v[j + 1]);
			}
		}
	}
	cout << "Posortowane: " << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	min = v[0];
	max = v[v.size() - 1];
	return max;
}

int main()
{
	int a, b;
	vector<int> v;
	list<int> l;
	/*cout << "Ile el chcesz dodac do wektora?" << endl;
	cin >> b;
	for (int i = 0; i < b; i++)
	{
	cout << "Podaj el" << endl;
	cin >> a;
	v.push_back(a);
	}
	cout <<"Rozamiar wektora: "<< v.size() << endl;

	cout << "Wartosci wektora:" << endl;
	for (int i = 0; i < b; i++)//i<v.size()
	{
	cout << v[i] << endl;
	}
	cout << "Maximum wynosi: " << max(v) << endl;
	*/
	/*
	cout << "Ile el chcesz dodac do listy?" << endl;
	cin >> b;


	for (int i = 0; i < b; i++)
	{
	cout << "Podaj el" << endl;
	cin >> a;
	///insert(i,a);
	l.push_back(a);
	//l.push_front(a);
	}


	cout << "Rozamiar listy: " << l.size() << endl;

	cout << "Wartosci listy:" << endl;

	for (list<int>::iterator itr = l.begin(); itr != l.end(); itr++)//i<v.isze()
	{
	cout << *itr << endl;
	}



	cout << "Wartosci listy od konca: " << endl;
	for (list<int>::reverse_iterator itr = l.rbegin(); itr != l.rend(); itr++)//i<v.isze()
	{
	cout << *itr << endl;
	}

	float srednia = 0;


	for (list<int>::iterator itr = l.begin(); itr != l.end(); itr++)//i<v.isze()
	{
	srednia += *itr;
	}
	srednia = srednia / l.size();
	cout << "Srednia wynosi: " << srednia << endl;
	*/
	auto start = chrono::steady_clock::now();
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		l.push_back(i);
	}
	for (int i = 0; i < 100000; i++)
	{
		v.insert(v.begin(), i);
	}

	srand(time(NULL));
	for (int i = 0; i < 100000; i++)
	{
		a = rand() % 10;
		l.push_front(a);
	}
	auto end = chrono::steady_clock::now();
	auto diff = end - start;
	cout << chrono::duration <double, milli>(diff).count() << " ms" << endl;


	system("pause");
	return 0;
}