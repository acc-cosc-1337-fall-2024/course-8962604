#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "expressions.h"
#include "constants.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify that constant books sold", "return a (double) decimal value")
{
	REQUIRE(22.1 == const_books_sold_monthly(221, 10));
}
TEST_CASE("Test interst rate")
{
	REQUIRE(5.9 == calculate_tax_rate(100));
}