/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/

#include "roll.h"
#include <iostream>
#include <vector>



using namespace std;
int main()
{
	Die dice1;
	Die dice2;
	int prompt;
	vector<Roll> rollVector;
	

	for (int i = 0; i < 20; i++)
	{
		Roll rr;
	
		rr.roll();
	
		rollVector.push_back(rr.die1_roll_value);
		rollVector.push_back(rr.die1_roll_value);
	}

//	for (int i = 0; i < rollVector.size(); i++) {
		//for (int j = 0; j < rollVector[i].size(); j++)
//			cout << rollVector[i][j] << " ";
	//}

	return 0;
}