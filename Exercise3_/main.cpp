#include<iostream>
#include<conio.h>
#include"arrDishes.h"

using namespace std;

int menu() {
	int option;
	do {
		cout << "\n\t====Menu====";
		cout << "\n\t1. Add dish";   
		cout << "\n\t2. Modify dish";
		cout << "\n\t3. Delete dish";
		cout << "\n\t4. Report spicy dish";
		cout << "\n\t5. Report expensive dish";
		cout << "\n\t6. Print";
		cout << "\n\t==============";
		cout << "\n\tSelect option: "; cin >> option;
	} while (option < 1 || option>6);

	return option;
}

int main() {

	int option, position;
	string newDish;

	arrDishes* arr = new arrDishes();
	Dishes* dish;

	while (true)
	{
		system("cls");
		option = menu();

		switch (option)
		{
		case 1: {
			dish = new Dishes();
			arr->addDish(dish);
			cout << "\nDish generated!";
		}break;

		case 2: {
			cout << "\nEnter position: "; cin >> position;
			cout << "Enter new dish: "; cin >> newDish;
			arr->modifyDish(position, newDish);
		}break;

		case 3: {
			arr->deleteDish();	
		}break;

		case 4: {
			arr->reportDishSpicy();
		}break;

		case 5: {
			arr->reportDishSpicy();
		}break;

		case 6: {
			arr->printData();	
		}
		}
		cout << "\n\n"; system("pause");
	}

	_getch();
	return 0;
}