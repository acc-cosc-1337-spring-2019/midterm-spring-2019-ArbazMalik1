#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/

TEST_CASE("Test rolls")
{
	for (int i = 0; i < 20; i++)
	{
		REQUIRE(rolled_value() > 0 && rolled_value() <= 6);
	}
}

TEST_CASE("Test rolls greater 0")
{
	for (int i = 0; i < 20; i++)
	{
		REQUIRE(rolled_value() > 0);
	}
}

TEST_CASE("Test rolls less than 7")
{
	for (int i = 0; i < 20; i++)
	{
		REQUIRE(rolled_value() < 7);
	}
}