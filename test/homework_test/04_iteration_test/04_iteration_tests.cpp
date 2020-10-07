#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("VERIFICATION OF SOMETHING") 
{ 
std::string str1 = "AGCTATAG";
  REQUIRE(get_gc_content(str1) == .375);

std::string str2 = "CGCTATAG";
REQUIRE(get_gc_content(str2) == .50);

}

TEST_CASE(" TEST REVERSE STRING FUNCTION")
{
  std::string str1 = "AGCTATAG";
  REQUIRE(get_reverse_string(str1) == "GATATCGA");

  std::string str2 = "CGCTATAG";
  REQUIRE(get_reverse_string(str2) == "GATATCGC"); 
}

TEST_CASE("TEST FUCNTION GET DAN COMPLEMENT")
{
  
}
