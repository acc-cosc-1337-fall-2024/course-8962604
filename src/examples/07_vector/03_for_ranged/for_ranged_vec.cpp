#include "for_ranged_vec.h"

using std::vector;
using std::cout;


void vector_while_w_while()
{
    vector<int> nums{8, 6, 10};
    auto index = 0;
    nums[0] = 100; //can modify values with indexing

    while(index < nums.size())
    {
        cout<<nums[index]<,"\n";   
    }
}