#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify sum of squares")
{
   REQUIRE(14 == sum_of_squares(3));
   REQUIRE(50 == sum_of_squares(4));
   REQUIRE(55 == sum_of_squares(5));
}
TEST_CASE("Verify sum of squares for")
{
   REQUIRE(14 == sum_of_squares_for(3));
   REQUIRE(50 == sum_of_squares_for(4));
   REQUIRE(55 == sum_of_squares_for(5));
}