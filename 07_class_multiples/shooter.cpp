//class Shooter implementation
#include "shooter.h"
#include "roll.h"
#include "die.h"


Shooter shoot;
Roll rr;

Roll* Shooter::shoot(Die& d1, Die& d2)
{
	//create a Roll instance, call roll function, and return the instance 
	
	rr.roll();
	return(rr);

}
