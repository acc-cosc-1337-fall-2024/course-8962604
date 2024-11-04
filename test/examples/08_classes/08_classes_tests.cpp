#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include <ctime>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test Account get balance")
{
	//srand(time(0));
	Account account;

	REQUIRE(account.get_balance() >= 1);
	REQUIRE(account.get_balance() <= 10000);
}
TEST_CASE("Test account 1 param constructor")
{
	Account account(500); //assume 500 came from the data

	REQUIRE(500 == account.get_balance());

}
