/*
Create an instance of roll and call the friend function to output roll values
*/
#include "roll_friend.h"

int main() 
{

	Die dice;
	char wait;
	dice.roll(); // roll the dice

	cout << "roll value1 " << value_1() << endl;
	cout << "roll value2 " << value_2() << endl;
	cout << "Hit return to continue";
	cin >> wait;
	return 0;
}