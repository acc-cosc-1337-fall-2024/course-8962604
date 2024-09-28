#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
// Test cases for factorial function
TEST_CASE("Factorial function testing") {
    REQUIRE(factorial(3) == 6);   
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(6) == 720); 
}

// Test cases for gcd function
TEST_CASE("GCD function testing") {
    REQUIRE(gcd(5, 15) == 5);   
    REQUIRE(gcd(21, 28) == 7); 
    REQUIRE(gcd(25, 100) == 25);    
}
