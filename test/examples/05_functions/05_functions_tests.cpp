#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "reference.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Verify ref_param", "reference values")
{
	int num = 5;
	ref_param(num);

	REQUIRE(num == 10);

}
TEST_CASE("Test default params")
{
	REQUIRE(20 == get_total(2));
	REQUIRE(50 == get_total());

}
TEST_CASE("Test three default params(3)")
{
	 REQUIRE(2100 == get_total1());
     REQUIRE(2100 == get_total1(200.0));//overrides first parameter 
	 REQUIRE(1100 == get_total1(200.0, 5));
	 //REQUIRE(2100 == get_total1(200.0, ,200));cannot override mid param with this format
}
