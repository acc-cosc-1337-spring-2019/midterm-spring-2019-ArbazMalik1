/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/

#include "roll_ol.h"
#include <iostream>

int main() 
{
	Die die1;
	Die die2;

	die2 = die1;

	//this will copy the value

	Die& die3;
	Die& die4;

	die4 = die3;

	//this will copy the address 
	
	return 0;
}