#pragma once
#include<conio.h>
#include<iostream>

using namespace std;

int menu() {
	int option;
	do {
		cout << "\n\t===Menu===" << endl;
		cout << "\t1. Print" << endl;
		cout << "\t2. Add" << endl;
		cout << "\t0. Exit" << endl;
		cout << "\t============" << endl;
		cout << "\tSelect option: "; cin >> option;
	} while (option < 0 || option>2);

	return option;
}