//add include statements
#include "repetition.h"


//add function(s) code here

// Function to calculate factorial of a number using a loop
int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; ++i) {
        result *= i;
    }
    return result;
}

// Function to calculate gcd of two numbers using a loop
int gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}
