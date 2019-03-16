/*
Create an instance of roll and call the friend function to output roll values
*/
#include "roll_friend.h"

int main() 
{
	Roll roll;

	cout << "roll value1 " << roll.value_1() << endl;
	cout << "roll value2 " << roll.value_2() << endl;

	return 0;
}