#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */

TEST_CASE("Verify echo variable function", "should return the parameter value") {
	REQUIRE(5 == echo_variable(5));
	REQUIRE(100 == echo_variable(100));
	REQUIRE(0 == echo_variable(0));
}
TEST_CASE("Test add numbers", "should add two numbers"){
	REQUIRE(10 == add_numbers(7, 3));
	REQUIRE(20 == add_numbers(10, 10));
}
TEST_CASE("Return int with double variable", "decimals ignored"){
	REQUIRE(9 == divide_numbers(100.1, 10.5));
}
TEST_CASE("Multiply int * double", "returns int or double "){
	REQUIRE(1.5 == calculate_interest(.15, 10));
}
TEST_CASE("Verify that avg books sold", "return a (double) decimal value"){
	REQUIRE(22.1 == avg_books_sold_monthly(221 / 10));
}
/*test case add_to_double_1 with 0 as parameter*/

/*test case add_to_double_1 with 1 as parameter*/

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */
TEST_CASE("return ch at int", "ascii value")
{
  REQUIRE(65 == return_ascii_value('A'));
  REQUIRE(97 == return_ascii_value('a'));
}

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

