#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna_consensus.h"
#include <vector>
//write include statement for dna consensus header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Maximum")
{
	REQUIRE(maximum(vector<string>"GTACCGGTAAGT", vector<string>"AAAGCTGGCTTA") == 9);
}
