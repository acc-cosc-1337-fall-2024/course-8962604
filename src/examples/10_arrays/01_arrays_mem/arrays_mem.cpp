//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout;

void use_stack_array()
{
    const int SIZE = 3;
    int nums[SIZE]{6, 1, 10};

    cout<<nums[0]<<"\n";
    cout<<nums[1]<<"\n";
    cout<<nums[2]<<"\n";

}
void arrays_and_pointers()
{
    const int SIZE = 3;
    int nums[SIZE]{6, 1, 10};

    cout<<nums<<"\n";

    int* nums_ptr = nums;
    cout<<*nums_ptr<<"\n";

    nums_ptr ++; //jump 4 addresses
    cout<<*nums_ptr;

}
