#pragma once
#include<iostream>
#include<string>
#include"Dishes.h"

using namespace std;

class arrDishes {

private:
	int size;
	Dishes** arr;

public:
	//Constructor.
	arrDishes() {
		size = 0;
		arr = nullptr;
	}

	//Destructor.
	~arrDishes() {};

	//Methods.
	void addDish(Dishes* dish) {

		Dishes** tempArray = new Dishes * [size + 1];

		for (int i = 0; i < size; i++) {
			tempArray[i] = arr[i];
		}
		tempArray[size] = dish;

		size++;
			
		if (arr != nullptr)delete[]arr;

		arr = tempArray;
	}
	void modifyDish(int pos, string newDish) {
		//En mi arreglo, en la posición seleccionada, cambiamos el dato del plato.
		if (arr != nullptr) {
			arr[pos]->setDish(newDish);
		}
		else
		{
			cout << "\n\tEmpty array";
		}
		
	}
	void deleteDish() {

		if (arr != nullptr) {
			Dishes** tempArray = new Dishes * [size - 1];

			for (int i = 0; i < size - 1; i++) {
				tempArray[i] = arr[i];
			}

			size--;

			arr = tempArray;
		}
		else
		{
			cout << "\n\tEmpty array!";
		}
	}
	void reportDishSpicy() {
		
		if (arr != nullptr) {
			for (int i = 0; i < size; i++) {
				if (arr[i]->getValidate1() == "Picante") {
					arr[i]->printDishData();
				}
			}
		}
		else
		{
			cout << "\n\tEmpty array!";
		}
	}
	void reportExpensiveDishes() {

		if (arr != nullptr) {
			for (int i = 0; i < size; i++) {
				if (arr[i]->getAverage() > 12) {
					arr[i]->printDishData();
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
				cout << "\n\nDish [" << i << "]";
				arr[i]->printDishData();
			}
		}
		else
		{
			cout << "\n\tEmpty array!";
		}
	}





};