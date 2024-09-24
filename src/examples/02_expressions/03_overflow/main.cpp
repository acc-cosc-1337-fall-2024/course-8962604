#include <iostream>
#include<limits.h>


suing std::cout, using std::cin;

int main()
{
    int max_int = INT_MAX
    //add 1 to max int
    cout<<"Value of MAX_INT: "<<max_int<<"\n";

    max_int += 1;
    cout<<"Value of Max_INT: "<<max_int<<"\n";

    //undeflow
    float floatVar = 3.0E-47
    cout<<"Value of floatVar: "<<floatVar<<"\n";

    return 0;
}