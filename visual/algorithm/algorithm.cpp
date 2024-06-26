#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


struct Student
{
	string first_name;
	string last_name;
	int computer_science_grade;
};

bool compare_students_grades(Student& s1, Student& s2)
{
	if (s1.computer_science_grade > s2.computer_science_grade)
	{
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{


	vector<Student> air_students;

	Student student_new;

	student_new.first_name = "Geralt";

	student_new.last_name = "of Rivia";

	student_new.computer_science_grade = 6;

	air_students.push_back(student_new);


	vector<int> collection;
	for (int i = 0; i<10; i++)
	{
		collection.push_back(rand() % 100);
	}


	cout << endl << "Collection before sorting : " << endl;


	for (auto itr = collection.begin(); itr != collection.end(); itr++)
	{
		cout << *itr << ", ";
	}


	sort(collection.begin(), collection.end());
	// dla list u¿yj: collection.sort()     

	cout << endl << "Collection after sorting : " << endl;

	for (auto itr = collection.begin(); itr != collection.end(); itr++)
	{
		cout << *itr << ", ";
	}

	cout << endl;

	cout << endl << "AiR students before sorting: " << endl;
	for (auto itr = air_students.begin(); itr != air_students.end(); itr++)
	{
		// dostêp za pomoc¹ operatora .
		cout << (*itr).first_name << " " << (*itr).last_name << ": " << (*itr).computer_science_grade << endl;
	}
	sort(air_students.begin(), air_students.end(), compare_students_grades);
	// dla listy u¿yj air_students.sort()
	cout << endl << "AiR students after sorting: " << endl;
	for (auto itr = air_students.begin(); itr != air_students.end(); itr++)
	{
		// dostêp za pomoc¹ operatora ->
		cout << itr->first_name << " " << itr->last_name << ": " << itr->computer_science_grade << endl;
	}

	system("pause");
	return 0;
}