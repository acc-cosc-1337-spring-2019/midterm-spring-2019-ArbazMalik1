//class Shooter implementation
#include "shooter.h"
#include "roll.h"

Shooter shoot;

void Shooter::shoot(Die& d1, Die& d2)
{
	//create a Roll instance, call roll function, and return the instance 
	Roll shooter;
	return shooter.roll();
	
}

