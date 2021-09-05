#pragma once
#include<iostream>
#include<conio.h>

using namespace std;

int menu() {

	int option;
	do {
		cout << "\n\t====Menu====";
		cout << "\n\t1. Print Eclipse";
		cout << "\n\t2. Add Eclipse";
		cout << "\n\t3. Delete Eclipse";
		cout << "\n\t4. Modify Type";
		cout << "\n\t=================";
		cout << "\n\tEnter option: "; cin >> option;

	} while (option < 0 || option>7);

	return option;
}
