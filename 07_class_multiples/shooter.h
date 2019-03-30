//class Shooter interface
#include <iostream>
#include <string>
#include "die.h"

using namespace std;

class Shooter
{
public:
	Roll* shoot(Die& d1, Die& d2);
};