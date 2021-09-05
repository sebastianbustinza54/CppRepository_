#pragma once
#include<iostream>
#include<conio.h>
#include<string>
#include"Eclipse.h"

using namespace std;

class arrEclipse {

private:
	int size;
	Eclipse** e;

public:
	//Constructor.
	arrEclipse() {
		size = 0;
		e = nullptr;
	}
	//Destructor.

	~arrEclipse() {};

	//Methods.
	void addEclipse(Eclipse* e) {
		//Creamos un arreglo temporal con un espacio m�s que el original.
		Eclipse** tempArray = new Eclipse * [size + 1];
		for (int i = 0; i < size; i++) {
			//Copiamos los valores del arreglo original al arreglo temporal.
			tempArray[i] = this->e[i];
		}
		//Colocamos los datos que dan el par�metro de la funci�n en la �ltima posici�n del arreglo.
		tempArray[size] = e;
		//Incrementamos el tama�o +1.
		size++;
		//Eliminarmos todos los valores que ten�a el arreglo original.
		if (this->e != nullptr)delete[]this->e;
		//Devolvemos(copiamos) todos los datos del arreglo temporal al arreglo original.
		this->e = tempArray;
	}
	void modifyType(int pos, string newType) {
		if (e != nullptr) {
			e[pos]->setType(newType);
		}
		else
		{
			cout << "\nEmpty array!";
		}
		
	}
	void deleteEclipse() {
		//Creamos un arreglo temporal con un espacio menos que el original.
		Eclipse** tempArray = new Eclipse * [size - 1];
		for (int i = 0; i < size - 1; i++) {
			//Copiamos los valores del arreglo original al arreglo temporal, una posici�n menos.
			tempArray[i] = e[i];
		}
		//Disminuimos el tama�o una posici�n menos.
		size--;
		//Devolvemos(copiamos) todos los datos del arreglo temporal al arreglo ariginal.

		e = tempArray;
	}
	void printData() {
		if (e != nullptr) {
			for (int i = 0; i < size; i++) {
				cout << "\n\nEclipse [" << i << "]";
				e[i]->printData();
			}
		}
		else
		{
			cout << "\nEmpty array!";
		}
		
	}

};