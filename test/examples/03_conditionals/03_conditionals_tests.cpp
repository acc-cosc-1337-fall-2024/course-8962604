#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test and truth table")

REQUIRE("TRUE == TRUE or False");
REQUIRE("TRUE == FALSE or True");
REQUIRE("FALSE == TRUE or True");
REQUIRE("FALSE == FALSE or True");

