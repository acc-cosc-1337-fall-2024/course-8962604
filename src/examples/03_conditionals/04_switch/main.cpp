#include<iostream>
#include "switch.h"

using std::cout; using std::cin; 

using std::string;

int main() 
{
    int option;
    cout<<"Enter Option:";
    cin>>option;
    string option_result = menu_option(option);
    cout<<option_result<<"\n";
    return 0;

}