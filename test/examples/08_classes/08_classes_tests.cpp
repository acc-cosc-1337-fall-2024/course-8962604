#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test Account get balance")
{
	Account account;

	REQUIRE(0 == account.get_balance());
}
TEST_CASE("Test account 1 param constructor")
{
	Account account(500); //assume 500 came from the data

	REQUIRE(500 == account.get_balance());

}
