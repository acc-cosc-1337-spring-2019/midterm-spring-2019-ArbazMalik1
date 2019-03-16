/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll OVERLOADED function,
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

#include "roll_ol.h";
#include <iostream>
#include <vector>
#include <vector>

using namespace std;
int main()
{
	Die dice2;
	Die dice1;
	vector<Roll> rollVector;


	for (int i = 0; i < 20; i++)
	{
		Roll roll;
		int roll_value1;
		int roll_value2;
		roll.roll(&dice1, &dice2);
		roll_value1 = dice1.rolled_value();
		roll_value2 = dice2.rolled_value();
		cout << "Dice roll: " << roll_value1 << " and " << roll_value2 << endl;
		rollVector.push_back(roll_value1);
		rollVector.push_back(roll_value2);
	}

	for (int i = 0; i < rollVector.size(); i++) {
		for (int j = 0; j < rollVector[i].size(); j++)
			cout << rollVector[i][j] << " ";
	}

	return 0;
}