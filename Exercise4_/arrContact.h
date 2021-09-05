#pragma once
#include<iostream>
#include<string>
#include"Contact.h"

using namespace std;

class arrContact {

private:
	int size;
	Contact** arr;

public:
	//Constructor.
	arrContact() {
		size = 0;
		arr = nullptr;
	}
	
	//Destructor.
	~arrContact() {};

	//Methods.
	void addContact(Contact*cont_) {

		Contact** tempArray = new Contact * [size + 1];
		for (int i = 0; i < size; i++) {
			tempArray[i] = arr[i];
		}

		tempArray[size] = cont_;

		size++;

		if (arr != nullptr)delete[]arr;

		arr = tempArray;
	}
	void modifyRed(int pos, string newRed) {
		if (arr != nullptr) {
			arr[pos]->setRed(newRed);
		}
		else
		{
			cout << "\n\tEmpty array";
		}
	}
	void deleteContact() {
		if (arr != nullptr) {
		Contact** tempArray = new Contact * [size - 1];

		for (int i = 0; i < size - 1; i++) {
			tempArray[i] = arr[i];
		}

		size--;

		arr = tempArray;
		}
		else
		{
			cout << "\n\tEmpty array";
		}
	}
	void yearInMay() {
		if (arr != nullptr) {

			for (int i= 0; i < size; i++) {
				if (arr[i]->getMonth() == 5) {
					arr[i]->printData();
				}
			}
		}
		else
		{
			cout << "\n\tEmpty array";
		}
	}
	void maleContact() {
		if (arr != nullptr) {

			for (int i = 0; i < size; i++) {
				if (arr[i]->getGender() == "Male") {
					arr[i]->printData();
				}
			}
		}
		else
		{
			cout << "\n\tEmpty array";
		}
	}
	void redContact() {
		if (arr != nullptr) {
			
			for (int i = 0; i < size; i++) {
				if (arr[i]->getRed() == "Facebook" || arr[i]->getRed() == "WhatsApp") {
					arr[i]->printData();
				}
			}
		}
		else
		{
			cout << "\n\tEmpty array!";
		}
	}
	void printData() {
		if (arr != nullptr) {

			for (int i = 0; i < size; i++) {
				cout << "\n\nContact [" << i << "]";
				arr[i]->printData();
			}
		}
		else
		{
			cout << "\n\tEmpty array!";
		}
	}
};