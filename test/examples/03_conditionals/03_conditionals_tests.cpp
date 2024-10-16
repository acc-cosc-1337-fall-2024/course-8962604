#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test and Truth Table")
{
	REQUIRE(false == (false && false));
	REQUIRE(false == (false && true));
	REQUIRE(false == (true && false));
	REQUIRE(true == (true && true));
}
TEST_CASE("Test or truth table")
{
	REQUIRE(false == (false || false));
	REQUIRE(true == (false || true));
	REQUIRE(true == (true || false));
	REQUIRE(true == (true || true));
	
}
TEST_CASE("Test not truth table")
{
	REQUIRE(true == !false);
	REQUIRE(false == !true);
}
TEST_CASE("Test is number even")
{
	REQUIRE(true == is_even(2));
	REQUIRE(false == is_even(3));
	REQUIRE(true == is_even(4));
	REQUIRE(true == is_even(100));
	REQUIRE(false == is_even(101));
}

