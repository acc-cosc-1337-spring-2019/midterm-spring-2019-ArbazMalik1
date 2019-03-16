//roll class implementation

#include "roll.h";

Die dice;
Roll rr;

void Die::roll()
{
	roll_value = rand() % sides + 1;
}

int Die::rolled_value() const
{
	return roll_value;
}


void Roll::roll()
{
	dice.roll();
	rr.die1_roll_value = dice.rolled_value();
	rr.die2_roll_value = dice.rolled_value();
	rr.rolled = true;
}
bool Roll::craps()
{
	int rolledValues;

	if (rr.rolled)
	{
		rolledValues = rr.die1_roll_value + rr.die2_roll_value;
		if (rolledValues == 2 || rolledValues == 3 || rolledValues == 12)
		{
			return true;
			cout << ". You lose!" << endl;
		}
	}
	return(false);

}

bool Roll::natural()
{
	int rolledValues;

	if (rr.rolled)
	{
		rolledValues = rr.die1_roll_value + rr.die2_roll_value;
		if (rolledValues == 7|| rolledValues == 11)
		{
			return true;
			cout << ". You win!" << endl;
		}
	}
	return(false);

}

bool Roll::points()
{
	int rolledValues;

	if (rr.rolled)
	{
		rolledValues = rr.die1_roll_value + rr.die2_roll_value;
		if (rolledValues == 4 || rolledValues == 5 || rolledValues == 6 || rolledValues == 8 || rolledValues == 9 || rolledValues == 10)
		{
			rr.roll();
			int sum = rr.die1_roll_value + rr.die2_roll_value;

			if (sum == rolledValues)
			{
				cout << ". Winner !" << endl;
				return(true);
		
			}
			else if (sum == 7)
			{
				cout << ". You Lose!" << endl;
				return (false);
	
			}
		}
	}
	return(false);

}

string Roll::result()
{

	if (rr.craps() )
		return ("Craps");
	else if (rr.natural() )
		return ("Natural");
	else if (rr.points() )
		return ("Points");

}

int Roll::value_1()
{
	return (rr.die1_roll_value);
}
int Roll::value_2()
{
	return (rr.die2_roll_value);

}