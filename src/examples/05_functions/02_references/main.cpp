#include<iostream>

using std::cout;

int main()
{
    int num = 5;
    int &num_ref = num; //work with the memory ddress of num

    cout<<"num ref_value: "<<num_ref<<"\n";
    num_ref = 10;
    cout<<"num ref_value: "<<num_ref<<"\n";

    cout<<"Value of num:  "<<num<<"\n";

    return 0;
}