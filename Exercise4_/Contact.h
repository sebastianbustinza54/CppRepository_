#pragma once
#include<iostream>
#include<string>
#include<time.h>
#include"Date.h"

using namespace std;

string Gender[2] = { "Female","Male" };
string Faculty[4] = { "Catolica","UPC","San Marcos","UNI" };
string Red[4] = { "Facebook","Google+","Twitter","WhatsApp" };

class Contact {

private:
	string name;
	int number;
	string gender;
	string faculty;
	string email;
	string red;
	Date date;

public:
	//Constructores.
	Contact() {
		name = " ";
		number = 0;
		gender = " ";
		faculty = " ";
		email = " ";
		red = " ";
	}
	Contact(string name, string email) {
		this->name = name;
		number = 712345116 + rand() % (1000000000 - 712345116);
		gender = Gender[rand() % 2];
		faculty = Faculty[rand() % 4];
		this->email = email;
		red = Red[rand() % 4];
		date = Date();
	}

	//Destructores.
	~Contact() {};

	//Getters.
	int getMonth() {
		return date.getMonth();
	}
	string getGender() {
		return gender;
	}
	string getRed() {
		return red;
	}
	//Setters.
	void setRed(string v) {
		this->red = v;
	}
	//Methods.
	void printData() {
		cout << "\nName: " << name;
		cout << "\nNumber: " << number;
		cout << "\nGender: " << gender;
		cout << "\nFaculty: " << faculty;
		cout << "\nDate: " << date.getFinalDate();
		cout << "\nEmail: " << email;
		cout << "\nRed: " << red;
	}
};