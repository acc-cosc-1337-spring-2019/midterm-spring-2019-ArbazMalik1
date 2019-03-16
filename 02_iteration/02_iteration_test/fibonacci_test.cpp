#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "fibonacci.h"
//write include statement for fibonacci header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write test case for get fibonacci function with values 10 and 100
*/
TEST_CASE("Get Fibonacci")
{
	REQUIRE(get_fibonacci(10) == 55);
	REQUIRE(get_fibonacci(100) == -980107325);
}