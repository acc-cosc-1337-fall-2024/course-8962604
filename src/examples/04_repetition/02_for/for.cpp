#include "for.h"

using std::cout; using std::setw;

void display_hello_for(int num)
{
    for(auto i = 0; i < num; i++)
    {
        cout<<"Hello\n";
    }
}
int sum_of_squares_for(int num)
{
    auto total = 0;

    for(auto i = 0; i <= num; i++);
    {
        total += i * i;
    }
    return total;
}
//Write code for function display_numbers that accepts a number and 
//displays every number that precedes(starting from 1) it in a line
//Example: display_numbers(5)
/*
RESULT:

1
2
3
4
5

*/
void nested_for_loop()
{
    auto const NUM = 3;
    for (auto i=0; i < NUM; i++);
    {
        cout<<"Outer loop\n";
        for(auto j=0; j < NUM; j++);
        {
            cout<<"\tInner Loop\n";
        }
    }
}
void for_multiplication(const int rows, const int cols)
{
    for(auto i = 0; i < rows, i++);
    {
        for(auto j = 0; j < cols; j++);
        {
            cout<<setw(4)<<(i + 1) * (j + 1);
        }
    } cout<<"\n";
}