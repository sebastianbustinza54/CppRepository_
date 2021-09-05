#pragma once
#include"Contact.h"
#include<iostream>

using namespace std;

class Diary {

private:
	int size = 0;
	Contact** arrContact;

public:
	//Constructor.
	Diary() {
		//Inicializando atributos.
		size = 0;
		arrContact = nullptr;
	}

	//Destructor
	~Diary() {};

	//Methods.

	void addContact(Contact* c) {

		//Creamos un arreglo temporal con un espacio m�s que el original.
		Contact** tempArray = new Contact * [size + 1];
		for (int i = 0; i < size; i++) {
			//Copiamos los valores del arreglo original al arreglo temporal.
			tempArray[i] = arrContact[i];
		}
		//Colocamos los datos que dan el par�metro de la funci�n en la �ltima posici�n del arreglo.
		tempArray[size] = c;
		//Incrementamos el tama�o +1.
		size++;
		//Eliminarmos todos los valores que ten�a el arreglo original.
		if (arrContact != nullptr)delete[]arrContact;
		//Devolvemos(copiamos) todos los datos del arreglo temporal al arreglo original.
		arrContact = tempArray;
	}
	void printAgendData() {
		if (arrContact != nullptr) {
			for (int i = 0; i < size; i++) {
				cout << "\nContact [" << i << "]";
				arrContact[i]->printData();
			}
		}
		else
		{
			cout << "\nEmpty array!!";
		}
	}


};