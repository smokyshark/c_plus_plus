#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<algorithm>


using namespace std;
/*void sklalar(vector<vector<int> > &vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		for (int j = 0; j < vector.size(); i++)
		{
			vector.push_back(2 * i);
		}
	}
}*/
struct Student
{
	string imie;
	int index[20];
};
bool funkcja_porownujaca(int &index,int &index2)
{
	if (index > index2)
	{
		return true;
	}
	else
		return false;
	
}
int main()
{
	vector<vector<int> > v_2d;
	int number_of_rows = 6;
	int number_of_cols = 5;
	/*
	for (int i = 0; i < number_of_rows; i++)
	{
		vector<int> v_row;

		for (int j = 0; j < number_of_cols; j++)
		{
			v_row.push_back(10 * i + j);
			
		}
		v_2d.push_back(v_row);
		
	}

	cout << "All rows and columns:" << endl;
	//cout << "Row 2, column 3: " << v_2d[2][3] << endl;
	//for (int i = 1; i < number_of_rows; i++)
	for (int i = 1; i < v_2d.size(); i++)
	{
		for (int j = 0; j < v_2d[i].size(); j++)
		{
			cout << v_2d[i][j] << " ";

		}
		cout << endl;
	}
	
	*/

	for (int i = 0; i < number_of_rows; i++)
	{
		vector<int> v_row;

		for (int j = 0; j < number_of_cols; j++)
		{
			v_row.push_back(2*10*i+j);

		}
		v_2d.push_back(v_row);

	}
	
	cout << "All rows and columns:" << endl;
	for (int i = 1; i < v_2d.size(); i++)
	{
		for (int j = 0; j < v_2d[i].size(); j++)
		{
			cout << v_2d[i][j] << "\t";

		}
		cout << endl;
	}
	/*
	string s1 = "Hello";
	string s2 = "world";
	// wyœwietlanie
	cout << s1 << " " << s2 << "!" << endl;
	// ³¹czenie stringów
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;

	string s_from_user;
	getline(cin, s_from_user);      // pobrany tekst mo¿e zawieraæ spacje
	cout << "Text from user: " << s_from_user << endl;


	string word_from_user;
	cout << "Guess the lacking word: one, two, ..." << endl;
	getline(cin, word_from_user);
	// sprawdŸ czy d³ugoœæ jest odpowiednia
	if (word_from_user.length() != 5)
	{
		cout << "Your word is of wrong length" << endl;
	}
	else if (word_from_user == "three")
	{
		cout << "You guessed right!" << endl;
	}
	// dostêp do trzeciego znaku w stringu za pomoc¹ operatora swobodnego dostêpu ([]).
	cout << "Second letter is: " << word_from_user[1] << endl;
	// iterator
	for (string::iterator itr = word_from_user.begin(); itr != word_from_user.end(); ++itr)
	{
		if (*itr == 'e')    // teraz porównujemy znaki, wiêc ‘ ‘ s¹ wymagane!
		{
			cout << "Letter e found" << endl;
		}
	}

	*/


	string napis;
	cout << "Wpisz tekst." << endl;
	cin >> napis;
	cout << "Napis od konca: " << endl;
	for (int i = napis.length()-1; i >= 0; i--)
	{
		cout << napis[i];
	}
	cout << endl;

	vector<double>vector;
	for (int i = 0; i < 10; i++)
	{
		vector.push_back(rand()%100);
	}

	cout << "Przed sortowaniem:" << endl;
	for (auto itr = vector.begin(); itr != vector.end(); itr++)
	{
		cout << *itr << ", ";
	}

	sort(vector.begin(), vector.end());

	cout << "Po sortowaniu:" << endl;
	for (auto itr = vector.begin(); itr != vector.end(); itr++)
	{
		cout << *itr << ", ";
	}

	cout << endl;

	Student student;


	//student.index[0] = 131321;
	//student.index[1] = 131322;
	for (int i = 0; i < 20; i++)
	{
		student.index[i] = rand() % 100 + i * 20;
	}
	cout << "Nieposortowane:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << student.index[i] << endl;

	}

	sort(student.index[0], student.index[19], funkcja_porownujaca(&student.index[0], &student.index[19]));

	cout << "Posortowane:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << student.index[i] << endl;
		
	}

	system("pause");
	return 0;
}