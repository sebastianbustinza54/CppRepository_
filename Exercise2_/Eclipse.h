#pragma once
#include<iostream>
#include"Date.h"
#include"Time.h"

using namespace std;

string Type[2] = { "Solar","Lunar" };
string Announcement[2] = { "Si","No" };
string Continent[5] = { "AmericaS","AmericaN","Europe","Africa","Asia" };

class Eclipse {

private:

	string type;
	string earthquakes;
	string rains;
	string visibility;
	Date date;
	Time time;

public:
	//Constructor.
	Eclipse() {
		type = Type[rand() % 2];
		earthquakes = Announcement[rand() % 2];
		rains = Announcement[rand() % 2];
		visibility = Continent[rand() % 5];
		date = Date();
		time = Time();
	}

	//Destructor.
	~Eclipse() {};

	//Getter.
	
	//Setter.
	void setType(string v) {
		type = v;
	}

	//Methods.
	void printData() {
		cout << "\nType: " << type;
		cout << "\nEarthquakes: " << earthquakes;
		cout << "\nTime: " << time.printTime();
		cout << "\nRains: " << rains;
		cout << "\nDate: " << date.printDate();
		cout << "\nVisibility: " << visibility;
	}

};

