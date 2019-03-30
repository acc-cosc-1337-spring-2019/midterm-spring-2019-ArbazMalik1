//class interface
//Roll class interface 
#include <iostream>
#include <string>


using namespace std;

class Die
{
public:
	void roll();
	int rolled_value()const;
private:
	int roll_value, sides = 6;

};

class Roll
{
public:
	Roll();
	Roll(Die& d1, Die& d2);
	void roll();
	void roll(Die& d1, Die& d2);

	string result();
	int value_1();
	int value_2();

private:
	Die& die1;
	Die& die2;
	int die1_roll_value;
	int die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();
	bool points();

};

