#include<iostream>

using std::cout;

int main()
{
    int num = 5;
    int num1 = 10;

    cout<<num<<"\n";
    cout<<"num is stored at memory address: "<<&num<<"\n";

    cout<<num1<<"\n";
    cout<<"num1 is stored at memory address: "<<&num1<<"\n";

    return 0;
}