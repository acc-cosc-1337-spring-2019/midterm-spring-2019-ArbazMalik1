//class Craps interface
#include <vector>
#include "roll.h"
#include "shooter.h"

class Craps
{
public:
	void play_game();
    Craps operator << (vector<Roll>);
	Craps operator >> (vector<Shooter>);

private:
	vector<Roll> roll;
	vector <Shooter> shooter;
};