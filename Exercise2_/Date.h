#pragma once
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

class Date {

private:
	int day;
	int month;
	int year;

public:
	//Constructor.
	Date() {
		day = 1 + rand() % (32 - 1);
		month = 1 + rand() % (13 - 1);
		year = 2000 + rand() % (2201 - 2000);
	}
	
	//Destructor.
	~Date() {};

	//Getters.
	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}
	//Setters.
	void setDay(int v) {
		this->day = v;
	}
	void setMonth(int v) {
		this->month = v;
	}
	void setYear(int v) {
		this->year = v;
	}
	//Methods.
	string printDate() {
		string aux;

		aux.append(to_string(day));
		aux.append("/");
		aux.append(to_string(month));
		aux.append("/");
		aux.append(to_string(year));

		return aux;
	}
	
};
