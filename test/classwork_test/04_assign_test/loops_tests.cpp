#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"

TEST_CASE("Verify Test Configuration", "verification")
{
	REQUIRE(true == true);
}

TEST_CASE("Testing cal_factorial function")
{
  REQUIRE(cal_factorial(3) == 6);
  REQUIRE(cal_factorial(4) == 24);
  REQUIRE(cal_factorial(5) == 120);
}