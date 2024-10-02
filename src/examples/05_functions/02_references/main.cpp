#include<iostream>

using std::cout;

int main()
{
    int num = 5;
    int num1 = 10;
    int num2 = 20;
    char letter  = 'a';

    cout<<num<<"\n";
    cout<<"num is stored at memory address: "<<&num<<"\n";

    cout<<num1<<"\n";
    cout<<"num1 is stored at memory address: "<<&num1<<"\n";

    cout<<num2<<"\n";
    cout<<"num2 is stored at memory address: "<<&num2<<"\n";

    cout<<sizeof(num)<<"\n";
    cout<<sizeof(letter)<<"\n";

    return 0;
}