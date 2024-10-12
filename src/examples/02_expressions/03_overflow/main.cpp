#include <iostream>
#include <limits.h>


using std::cout; using std::cin;

int main()
{
    int max_int = INT_MAX;
    // Add 1 to max_int
    cout << "Value of max_int" << max_int;

    max_int += 1;
    cout<<"Value of max_int" << max_int;
    
    return 0;
}