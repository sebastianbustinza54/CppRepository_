#pragma once
#include<iostream>
#include<time.h>
#include<string>

using namespace std;

class Time {

private:
	int hour;
	int minute;
	int second;

public:
	//Constructor.
	Time() {
		hour = 1 + rand() % (32 - 1);
		minute = 1 + rand() % (13 - 1);
		second = 2000 + rand() % (2201 - 2000);
	}

	//Destructor.
	~Time() {};

	//Getters.
	int getHour() {
		return hour;
	}
	int getMinute() {
		return minute;
	}
	int getSecond() {
		return second;
	}
	//Setters.
	void setHour(int v) {
		this->hour = v;
	}
	void setMinute(int v) {
		this->minute = v;
	}
	void setSecond(int v) {
		this->second = v;
	}
	//Methods.
	string printTime() {
		string aux;

		aux.append(to_string(hour));
		aux.append("/");
		aux.append(to_string(minute));
		aux.append("/");
		aux.append(to_string(second));

		return aux;
	}
};