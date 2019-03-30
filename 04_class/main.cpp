//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

#include "die.h"
#include <iostream>

using namespace std;
Die dice;
int main()
{
	
	char choice;
	int roll_value;
	cout << "TEST";
	cin >> choice;

	do
	{
		dice.roll();
		roll_value = dice.rolled_value();

		cout << "Dice roll: " << roll_value << endl;
		cout << "Continue? y or n ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}
