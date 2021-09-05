#pragma once
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
		year = 2000 + rand() % (2051 - 2000);
	}

	//Destructor.
	~Date() {};

	//Getter.
	int getMonth() {
		return month;
	}

	//Method.
	string getFinalDate() {

		string aux;

		aux.append(to_string(day));
		aux.append("/");
		aux.append(to_string(month));
		aux.append("/");
		aux.append(to_string(year));

		return aux;
	}

};