#pragma once
#include<iostream>
#include<string>

using namespace std;

string Dish[4] = { "Crepe a la parisienne","Tacu tacu apocalipsis","Pollo con salsa maracuya","Arepas rellenas" };
int Announcement[2] = { 1,2 };
string Announcement_[2] = { "Picante","No picante" };

class Dishes {

private:
	string name;
	int fried;
	int calories;
	int average;
	string validate1;

public:
	//Constructor.
	Dishes() {
		name = Dish[rand() % 4];
		fried = Announcement[rand() % 2];
		calories = 1500 + rand() % (3501 - 1500);
		average = 15 + rand() % (51 - 15);
		validate1 = Announcement_[rand() % 2];
	}

	//Destructor.
	~Dishes() {};

	//Getters.
	string getValidate1() {
		return validate1;
	}
	int getAverage() {
		return average;
	}
	//Setters.
	void setDish(string v) {
		name = v;
	}

	//Methods.
	void printDishData() {
		cout << "\nName: " << name;
		cout << "\nFried[1] - Hot[2]: " << fried;
		cout << "\nSpicy?: " << validate1;
		cout << "\nCalories: " << calories;
		cout << "\nAverage: " << average;
	}
};
