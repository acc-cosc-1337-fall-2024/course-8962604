#include "for.h"

using std::cout; using std:cin;

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
         
for(auto i = 0, i <= num, i++)
{
   total += num * num;
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

