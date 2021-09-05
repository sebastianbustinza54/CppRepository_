#include<iostream>
#include<conio.h>
#include<string>
#include"arrContact.h"
#include<time.h>

using namespace std;

int menu() {

	int option;
	do {
		cout << "\n\t====Menu====";
		cout << "\n\t1. Add contact";
		cout << "\n\t2. Print contact";
		cout << "\n\t3. Modify contact";
		cout << "\n\t4. Delete contact";
		cout << "\n\t5.May contacts";
		cout << "\n\t6. Male contacts";
		cout << "\n\t7.Contacts with Facebook and WhatsApp";
		cout << "\n\t=====================";
		cout << "\n\tSelect option: "; cin >> option;
	} while (option < 1 || option>7);
	
	return option;
}

int main() {
	srand(time(NULL));
	int option, pos;
	string newRed;
	string name, email;

	arrContact* arrCont = new arrContact();
	Contact* ct;

	while (true)
	{
		system("cls");
		option = menu();

		switch (option)
		{
		case 1: {
			cout << "\nEnter name: "; cin >> name;
			cout << "Enter email: "; cin >> email;
			ct = new Contact(name, email);
			arrCont->addContact(ct);
			cout << "\n\tContact added!";
		}break;

		case 2: {
			arrCont->printData();
		}break;

		case 3: {
			cout << "\nEnter position: "; cin >> pos;
			cout << "Enter new red: "; cin >> newRed;
			arrCont->modifyRed(pos, newRed);
		}break;

		case 4: {
			arrCont->deleteContact();
		}break;

		case 5: {
			arrCont->yearInMay();
		}break;

		case 6: {
			arrCont->maleContact();
		}break;

		case 7: {
			arrCont->redContact();
		}
		}
		cout << "\n\n"; system("pause");
	}
	_getch();
	return 0;
}