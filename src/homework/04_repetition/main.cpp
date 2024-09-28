//write include statements
#include <iostream>
#include "repetition.h"


//write using statements

int main() {
    int choice;
    do {
        std::cout << "Menu:\n";
        std::cout << "1 - Factorial\n";
        std::cout << "2 - Greatest Common Divisor\n";
        std::cout << "3 - Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            int num;
            std::cout << "Enter a number: ";
            std::cin >> num;
            std::cout << "Factorial of " << num << " is " << factorial(num) << "\n";
        } else if (choice == 2) {
            int num1, num2;
            std::cout << "Enter two numbers: ";
            std::cin >> num1 >> num2;
            std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << "\n";
        } else if (choice == 3) {
            char confirm;
            std::cout << "Are you sure you want to exit? (y/n): ";
            std::cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') {
                break;
            }
        } else {
            std::cout << "Invalid choice, please try again.\n";
        }
    } while (true);

    return 0;
}