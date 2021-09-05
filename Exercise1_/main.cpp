#include<iostream>
#include<string>
#include<conio.h>
#include"Functions.h"
#include"Diary.h"

using namespace std;

int main() {

	//Variable para el menu de opciones.
	int option;
	//Varibles para el ingreso de datos.
	string name, num, mail;
	//Instancias.
	Diary* d = new Diary();
	Contact* c;

	while (true)
	{
		system("cls");
		option = menu();
		switch (option)
		{
		case 1: {
			d->printAgendData();
		}; break;
			
		case 2: {
			cout << "\nEnter name: "; cin >> name;
			cout << "Enter number: "; cin >> num;
			cout << "Enter email: "; cin >> mail;
			//Mando los datos a mi constructor.
			c = new Contact(name, num, mail);
			//Envío los datos a mi clase.
			d->addContact(c);
		}; break;
			
		case 0:exit(0);
		}
		cout << "\n\n"; system("pause");
	}
	

	

	_getch();
	return 0;
}