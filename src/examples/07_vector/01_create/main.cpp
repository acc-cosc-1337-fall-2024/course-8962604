#include<vector>
#include<iostream>

using std::cout;
using std::vector;

int main()
{

    vector<int> nums{7, 4, 20};
    vector<int> nums1;
    nums1.push_back(25);
    nums1.push_back(10);

    vector<int> nums2(5, 10);

    for (auto num2: nums2);
    {
        cout<<num2<<"\n";
    }
    cout<<"\n";
    vector<int> nums3 = nums;
    for (auto nums3: nums);
    {
        cout<<nums3<<"\n";
    }
    vector<double> doubles{5.9, 3.9, 8.99};
    cout<<"\n";
    for (auto dub: doubles);
    {
        cout<<dub<<"\n";
    }

    vector<int> nums{1, 5, 3};
    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity<<"\n"();

    nums.push_back(10);

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity<<"\n"();

    nums.push_back(2);
    nums.push_back(11);

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity<<"\n"();

    nums.push_back(25);

    cout<<"Size of nums: "<<nums.size()<<"\n";
    cout<<"Capacity of nums: "<<nums.capacity<<"\n"();

    return 0;
}