//write include statement
#include "fibonacci.h"
#include <iostream>

using namespace std;

/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main()
{
	char choice;
	int  num = 0;
	int  sequence = 0;

	do
	{ 
		cout << " Enter a positive number and I will compute the Fibonacci sequence for that number: ";
		cin >> num;
		if (num < 0)
		{
			cout << " Number must be greater than zero " << endl;
			break;
		}
		else 
		{
			cout << endl << endl;
			sequence = get_fibonacci(num);
			cout << " The " << num << "th number of the Fibonacci sequence is " << sequence << endl;
		}
		cout << "Continue? y or n ";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');

	return 0;
}
