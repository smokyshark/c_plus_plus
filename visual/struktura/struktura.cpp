#include <iostream>
#include<string>

using namespace std;
struct pet
{
	char name[20];
	int age;
	double weight;
};
struct person
{
	char name[20];
	char email[20];
	pet favourite_pet;
};
void printPet(pet cat)
{
	cout << "Details about my cat:" << endl;
	cout << "Cat's name: " << cat.name << endl;
	cout << "Cat's age: " << cat.age << endl;
	cout << "Cat's weight: " << cat.weight << endl;
}

int main()
{

	pet dog = { "Henry", 2, 0.5 };
	pet cat;
	cout << "Enter cat's name." << endl;
	cin >> cat.name;
	cout << "Enter cat's age." << endl;
	cin >> cat.age;
	cout << "Enter cat's weight." << endl;
	cin >> cat.weight;

	cout << "Details about my dog:" << endl;
	cout << "Dog's name: " << dog.name << endl;
	cout << "Dog's age: " << dog.age << endl;
	cout << "Dog's weight: " << dog.weight << endl<<endl;

	printPet(cat);
	cout << endl;

	
	pet * pdog;
	pdog = &dog;
	cout << "Enter dog's name." << endl;
	cin >> pdog->name;
	cout << "Enter dog's age." << endl;
	cin >> pdog->age;
	cout << "Enter dog's weight." << endl;
	cin >> pdog->weight;



	cout << "Details about my dog:" << endl;
	cout << "Dog's name: " << pdog->name << endl;
	cout << "Dog's age: " << pdog->age << endl;
	cout << "Dog's weight: " << pdog->weight << endl << endl;


	cout << "Your favorite pet is " << pdog->name;
	cout << ", which weights " << pdog->weight << "kg ";
	cout << "and is " << pdog->age << " years old."<<endl;

	person john;
	john.favourite_pet.age = 12;
	john.favourite_pet = dog;
	cout << "John's favourite pet is dog." << endl;
	cout << "John's dog's name is " << dog.name <<"."<< endl;
	

	system("pause");
	return 0;
}