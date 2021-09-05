#include<iostream>
#include<conio.h>
#include<string>
#include"arrEclipse.h"
#include"Functions.h"

using namespace std;

int main() {

	//Variables.
	int option, position;
	//---
	string newType;
	//Declarando instancias de objetos.
	arrEclipse* arrEclip = new arrEclipse();
	Eclipse* eclip;

	while (true)
	{
		system("cls");
		option = menu();
		switch (option)
		{
		case 1: {
			arrEclip->printData();
		}break;
			
		case 2: {
			eclip = new Eclipse();
			arrEclip->addEclipse(eclip);
			cout << "\nData generated!";
		}break;

		case 3: {
			arrEclip->deleteEclipse();
		}break;
			
		case 4: {
			cout << "\nEnter position: "; cin >> position;
			cout << "Enter new type: "; cin >> newType;

			arrEclip->modifyType(position, newType);
		}; break;

		case 0:exit(0);
		}
		cout << "\n\n"; system("pause");
	}
	_getch();
	return 0;
}
