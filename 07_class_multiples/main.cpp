
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
#include "roll_ol.h"
#include "shooter.h"
#include <iostream>
#include <vector>

using namespace std;

int main() 
{

	char userprompt;
    do
	{
		Die dice2;
		Die dice1;
		Shooter shooter;
		vector<Roll> rollVector;


		for (int i = 0; i < 10; i++)
		{
			rollVector.push_back(shooter.shoot());
		}

		for (int i = 0; i < rollVector.size(); i++) {
			for (int j = 0; j < rollVector[i].size(); j++)
				cout << rollVector[i][j] << " ";
		}
		cout << "Do you want to continue? (Y/N)";
		cin >> userprompt;
	} while (userprompt == 'y' || userprompt == 'Y');

	return 0;
}