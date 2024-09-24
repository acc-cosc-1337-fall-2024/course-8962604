#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test and truth table"){
	REQUIRE(false ==(true && false));
	REQUIRE(false == (true && false));
	REQUIRE(false == (false && false));
	REQUIRE(true == (true && true));
}
TEST_CASE("Test or truth table"){
	REQUIRE(true == (true || false));
	REQUIRE(true == (true || false));
	REQUIRE(false == (false || false));
	REQUIRE(true == (true || true));
}
TEST_CASE("Test not truth table"){
	REQUIRE(true == !false;);
	REQUIRE(false == !true);

}
TEST_CASE("Determine if a letter is a consonant"){
	REQUIRE(false == is_consonant('a'));
	REQUIRE(true == is_consonant('b'));
	REQUIRE(true == is_consonant('c'));
	REQUIRE(true == is_consonant('f'));
	REQUIRE(false == is_consonant('u'));
	REQUIRE(true == is_consonant('z'));
}
TEST_CASE("test is number even"){
	REQUIRE(true == is_even(2));
	REQUIRE(false == is_even(3));
	REQUIRE(true == is_even(4));
	REQUIRE(true == is_even(100));
	REQUIRE(false == is_even(101));
}

