#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include <ctime>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
TEST_CASE("Test checking Account get balance")
{
	srand(time(0));
	CheckingAccount account; 

	REQUIRE(account.get_balance() >= 1);
	REQUIRE(account.get_balance() <= 10000);
}
TEST_CASE("Test checking account 1 param constructor")
{
	CheckingAccount account(500); //assume 500 came from the data

	REQUIRE(500 == account.get_balance());

}
TEST_CASE("Test savings Account get balance")
{
	srand(time(0));
	SavingsAccount account; 

	REQUIRE(account.get_balance() >= 1);
	REQUIRE(account.get_balance() <= 10000);
}
TEST_CASE("Test account deposit w 1 default contructor")
{
	srand(time(0));
	Account account;
	REQUIRE(account.get_balance() >= 1);
	REQUIRE(account.get_balance() <= 10000);
	auto previous_balance = account.get_balance();

	account.deposit(100);
	REQUIRE(account.get_balance() == previous_balance + 100);
}
TEST_CASE("Test account deposit with 1 param contructor")
{
	Account account(500);
	REQUIRE(account.get_balance() == 500);
	account.deposit(100);
	REQUIRE(account.get_balance() == 600);
}
TEST_CASE("Test account withdraw with default constructor")
{
	Account account;
	REQUIRE(account.get_balance() >= 1);
	REQUIRE(account.get_balance() <= 10000);
	auto previous_balance = account.get_balance();
	account.withdraw(100);
	REQUIRE(account.get_balance() == previous_balance - 100);
}
TEST_CASE("Test account withdraw with 1 param constructor")
{
	Account account(500);

	REQUIRE(account.get_balance() == 500);

	account.withdraw(100);

	REQUIRE(account.get_balance() == 400);
}
TEST_CASE("Test account withdraw and deposit with default constructor")
{
	Account account;
	REQUIRE(account.get_balance() >= 1);
	REQUIRE(account.get_balance() <= 10000);
	auto previous_balance = account.get_balance();
	account.deposit(100);
	REQUIRE(account.get_balance() == previous_balance + 100);
	previous_balance = account.get_balance()
	account.withdraw(100);
	REQUIRE(account.get_balance() == previous_balance - 100);
}
TEST_CASE("Test account withdraw and deposit with 1 param constructor")
{

	Account account(500);
	REQUIRE(account.get_balance() == 500);
	account.deposit(100);
	REQUIRE(account.get_balance() == 600);
	aacount.withdraw(100);
	REQUIRE(account.get_balance() == 500);

}
