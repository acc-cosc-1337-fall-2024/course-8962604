#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "src/homework/03_decisions_tests.cpp/decisions.h"
#include <cassert>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}
int main() {
    // Test cases for get_letter_grade_using_if
    assert(get_letter_grade_using_if(95) == "A");
    assert(get_letter_grade_using_if(85) == "B");
    assert(get_letter_grade_using_if(75) == "C");
    assert(get_letter_grade_using_if(65) == "D");
    assert(get_letter_grade_using_if(50) == "F");

    // Test cases for get_letter_grade_using_switch
    assert(get_letter_grade_using_switch(95) == "A");
    assert(get_letter_grade_using_switch(85) == "B");
    assert(get_letter_grade_using_switch(75) == "C");
    assert(get_letter_grade_using_switch(65) == "D");
    assert(get_letter_grade_using_switch(50) == "F");

    return 0;

}