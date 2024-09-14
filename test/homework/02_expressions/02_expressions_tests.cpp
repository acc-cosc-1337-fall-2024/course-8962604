#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "../../../inc/catch.hpp"
#include "../../../src/homework/02_expressions/hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Get sales tax")
{
	REQUIRE(get_sales_tax_amount(10) == .675);
	REQUIRE(get_sales_tax_amount(20) == 1.35);
}
TEST_CASE("Get tip amount")
{
    REQUIRE(get_tip_amount(20, 0.15) == 3);
	REQUIRE(get_tip_amount(20, 0.20) == 4);
}


