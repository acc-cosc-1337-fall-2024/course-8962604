#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test and truth table")
{
	REQUIRE(false ==(true && false));
	REQUIRE(false == (true && false));
	REQUIRE(false == (false && false));
	REQUIRE(true == (true && true));
}
TEST_CASE("Test or truth table")
{
	REQUIRE(true == (true || false));
	REQUIRE(true == (true || false));
	REQUIRE(false == (false || false));
	REQUIRE(true == (true || true));
}
TEST_CASE("Test not truth table")
{
	REQUIRE(true == !false);
	REQUIRE(false == !true);

}
TEST_CASE("Determine if a letter is a consonant")
{
	REQUIRE(false == is_consonant('a'));
	REQUIRE(true == is_consonant('b'));
	REQUIRE(true == is_consonant('c'));
	REQUIRE(true == is_consonant('f'));
	REQUIRE(false == is_consonant('u'));
	REQUIRE(true == is_consonant('z'));
}
TEST_CASE("test is number even")
{
	REQUIRE(true == is_even(2));
	REQUIRE(false == is_even(3));
	REQUIRE(true == is_even(4));
	REQUIRE(true == is_even(100));
	REQUIRE(false == is_even(101));
}
TEST_CASE("Test get generation")
{
	REQUIRE("The Greatest Generation" == get_generation(1915));
	REQUIRE("The Silent Generation" == get_generation(1930));
	REQUIRE("The Baby Boomer Generation" == get_generation(1960));
	REQUIRE("Generation X" == get_generation(1971));
	REQUIRE("Generation Y" == get_generation(1990));
	REQUIRE("Generation Z" == get_generation(2010));
	REQUIRE("Generation Alpha" == get_generation(2020));
}
TEST_CASE("Test Menu Option")
{
	REQUIRE("Invalid Option" == menu_options(0));
	REQUIRE("Option 1" == menu_options(1));
	REQUIRE("Option 2" == menu_options(2));
	REQUIRE("Option 3" == menu_options(3));
	REQUIRE("Option 4" == menu_options(4));
	REQUIRE("Invalid Option" == menu+options(5));
}
