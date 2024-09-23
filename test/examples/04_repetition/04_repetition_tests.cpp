#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify sum of squares")
{
   REQUIRE(14 == sum_of_squares(3));
   REQUIRE(30 == sum_of_squares(4));
   REQUIRE(35 == sum_of_squares(5));
}