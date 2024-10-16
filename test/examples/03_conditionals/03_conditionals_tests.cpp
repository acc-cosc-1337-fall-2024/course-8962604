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
TEST_CASE("Determine is a letter is a vowel")
{
	REQUIRE(true == is_vowel('a'));
	REQUIRE(true == is_vowel('e'));
	REQUIRE(true == is_vowel('i'));
	REQUIRE(true == is_vowel('o'));
	REQUIRE(true == is_vowel('u'));
	
}
TEST_CASE("Determine if a letter is a consonant")
{
	REQUIRE(false == is_consonant('a'));
	REQUIRE(true == is_consonant('b'));
	REQUIRE(true == is_consonant('c'));
	REQUIRE(false == is_consonant('o'));
	REQUIRE(false == is_consonant('e'));
}
TEST_CASE("Test is number even")
{
	REQUIRE(true == is_even(2));
	REQUIRE(false == is_even(3));
	REQUIRE(true == is_even(4));
	REQUIRE(true == is_even(100));
	REQUIRE(false == is_even(101));
}
TEST_CASE("Determine if a letter is a vowel")
{
  char letter = 'i';
  REQUIRE(true == is_vowel(letter));
}

TEST_CASE("Test case generation")
{
	REQUIRE("Invalid Year" == get_generation(1800));
	REQUIRE("The Greatest generation" == get_generation(1915));
	REQUIRE("The Silent Generation" == get_generation(1930));
	REQUIRE("The baby Boomer Generation" == get_generation(1960));
	REQUIRE("Generation X" == get_generation(1971));
	REQUIRE("Generation Y" == get_generation(1990));
	REQUIRE("Generation Z" == get_generation(2010));
	REQUIRE("Generation Alpha" == get_generation(2020));
	REQUIRE("Invalid Year" == get_generation(2030));

}
TEST_CASE("Test menu options")
{
   REQUIRE("Option 1" == menu_options(0));
   REQUIRE("Option 1" == menu_options(1));
   REQUIRE("Option 2" == menu_options(2));
   REQUIRE("Option 3" == menu_options(3));
   REQUIRE("Option 4" == menu_options(4));
   REQUIRE("Invalid option" == menu_options(5));
}