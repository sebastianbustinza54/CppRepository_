#pragma once
#include<istream>
#include<string>

using namespace std;

class Class {

private:
	//Atributos.
	string name;
	int age;
	string gender;

public:
	
	//Constructores: Inicializar valores.
	Class();
	//Destructor: Al momento de terminar la ejecución se eliminen los valores.
	~Class();
	//Getters: Obtener el valor /* tipo get-Name-() */
	string getName();
	int getAge();
	string getGender();
	//Setters: Cambiar el valor /* void set-Name-(tipo v)*/
	void setName(string);
	void setAge(int);
	void setGender(string);
	//Methods: Las operaciones.
	void printData();
};

//Constructor.
Class::Class() {
	name = " ";
	age = 0;
	gender = " ";
}

//Destructor.
Class::~Class() {};

//Getters.
string Class::getName() {
	return name;
}
int Class::getAge() {
	return age;
}
string Class::getGender() {
	return gender;
}

//Setters.
void Class::setName(string name) {
	this->name = name;
}
void Class::setAge(int age) {
	this->age = age;
}
void Class::setGender(string gender) {
	this->gender = gender;
}

//Methods.
void Class::printData() {

	cout << "\n\nName: " << name;
	cout << "\nAge: " << age;
	cout << "\nGender: " << gender;
}