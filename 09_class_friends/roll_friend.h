//Roll class interface 
#include <iostream>
#include <string>
#include "die.h"

using namespace std;

class Roll
{
public:
	//Roll();
//	Roll(Die& d1, Die& d2);
	void roll();
	string result();
	int value_1();
	int value_2();

	friend int value_1();
	friend int value_2();

private:
//	Die& die1;
	//Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();
	bool points();

};
