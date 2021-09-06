#include<iostream>
#include<conio.h>
#include"Class.h"
#include<string>

using namespace std;

int main() {

	//Instanciamos una clase mediante un objeto.
	Class* obj = new Class();

	obj->printData();

	cout << "\n\n==========================================";

	cout << "\n\n";
	//Creo variables.
	string name, gender;
	int age;
	cout << "\nEnter name: "; cin >> name;
	cout << "Enter gender: "; cin >> gender;
	cout << "Enter age: "; cin >> age;

	obj->setName(name); obj->setAge(age); obj->setGender(gender);

	obj->printData();

	cout << "\n\n==========================================";

	_getch();
	return 0;
}