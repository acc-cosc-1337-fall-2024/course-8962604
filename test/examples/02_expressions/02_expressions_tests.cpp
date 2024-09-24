#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hw.expressions.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify tjat avg books....", "returns a double (decimal) value") {
	REQUIRE(22.1 == avg_books_sold_monthly(221 / 10));
}
TEST_CASE("Test interest rate")
{
	REQUIRE(5.9 == calculate_interest_rate(10));
}
