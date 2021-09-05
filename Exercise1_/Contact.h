#pragma once
#include<iostream>
#include<string>

using namespace std;

class Contact {

private:
	string name;
	string number;
	string email;

public:
	//Constructor.
	Contact() {
		//Inicializando atributos.
		name = " ";
		number = " ";
		email = " ";
	}
	Contact(string name, string number, string email) {
		this->name = name;
		this->number = number;
		this->email = email;
	}

	//Desctructor.
	~Contact() {};

	//Getters.
	string getName() {
		return name;
	}
	string getNumber() {
		return number;
	}
	string getEmail() {
		return email;
	}
	//Setters.
	void setNumber(string v) {
		number = v;
	}
	void setName(string v) {
		name = v;
	}
	void setEmail(string v) {
		email = v;
	}
	//Methods.
	void printData() {
		cout << "\nName: " << name;
		cout << "\nNumber: " << number;
		cout << "\nEmail: " << email;
	}
};