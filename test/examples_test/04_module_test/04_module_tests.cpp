#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
//#include "catch.hpp"
#include "for.h"
#include "while.h"
#include "value_ref.h"
#include "vec.h"


TEST_CASE ("Verify Test Configuration", "Verification") {
	REQUIRE(true == true);

  pass_by_val_and_ref(num1, num2);
  REQUIRE(num1 == 0);
  REQUIRE(num2 == 50);

}
TEST_CASE ("TEST FUNCTION VALUE PARAMETER with string")
{
  std::string str = "john";
  
  loop_string_w_inde(str);
  
  REQUIRE(str == "john");
}
TEST_CASE("Test function value parameter with string")
{
  std::string str+ "john";

  loop_string_w_index_ref(str);

  REQUIRE(str == "zzzz");
}
TEST_CASE("TEST FUNCTION REFERENCE PARAMEter with string for ranged w value target variable")
{
  std::string str = "john";
  
  loop_string_for_ranged_ref(str);
  
  REQUIRE(str == "john");
}
TEST_CASE ("Test function value parameter with string for ranged")
{
  std::string str = "john";

  loop_string_for_ranged_ref(str);

  REQUIRE(str == "john"):
}
TEST_CASE ("TEST FUNCTION VALUE PARAMETER WITH STRING FOR RANGED w reference target variable")
{
std::string str = "john";

loop_string_for_ranged_ref_fr_ref(str);

REQUIRE(str == "yyyy");

}
TEST_CASE ("TEST FUNCTION VALUE PARAMETER for vector")
{
std::vector nums {1, 4, 10};

std::vector expected_vector {1, 4, 10};

loop_vector_w_index(nums);

REQUIRE(nums == expected_vector);
}
TEST_CASE ("TEST FUNCTION VALUE PARAMETER for vector")
{
std::vector nums {1, 4, 10};

std::vector expected_vector {0, 0, 0};

loop_vector_w_index_ref(nums);

REQUIRE(nums == expected_vector);
}
TEST_CASE ("TEST FUNCTION VALUE PARameter for vector-for-ranged")
{
std::vector nums {1, 4, 10};

std::vector expected_vector {1, 4, 10};

loop_vector_for_ranged(nums);

REQUIRE(nums == expected_vector);
}
TEST_CASE ("TEST FUNCTION reference parameter for vector-for ranged")
{
std::vector nums {1, 4, 10};
std::vector expected_vector {1, 4, 10};

loop_vector_for_ranged_ref(nums);

REQUIRE(nums == expected_vector);
}
TEST_CASE ("TEST FUNCTION reference parameter for vector-for ranged-ref")
{
std::vector nums {1, 4, 10};

std::vector expected_vector {1, 4, 10};

loop_vector_for_ranged_ref(nums);

REQUIRE(nums == expected_vector);
}