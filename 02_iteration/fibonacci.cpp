#include <iostream>

using namespace std;
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/

int get_fibonacci(int integer)
{
	int a = 0, b = 1, c, i;
	for (i = 2; i <= integer; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}
