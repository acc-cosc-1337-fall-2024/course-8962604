#include <iostream>
#include <limits.h>


using std::cout; using std::cin;

int main() //undeflow
{
    int max_int = INT_MAX;
    // Add 1 to max_int
    cout << "Value of max_int" << max_int;

    max_int += 1;
    cout<<"Value of max_int" << max_int;
    
    // overflow
    float floatVar = 3.0E47;
    cout<<"Vlaue of floatvar: "<<floatVar<<"\n";
    return 0;
}