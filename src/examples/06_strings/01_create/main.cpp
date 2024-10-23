# include<iostream>
# include<string>

using std::cout;
using std::string;

int main()
{
    string lang = "C++";
    auto num = 5;

    cout<<lang<<"\n";
    cout<<"Address of lang"<<&lang<<"\n";
    cout<<"Addres of num"<<&num<<"\n";

    cout<<lang[0]<<"\n";
    cout<<"Address of character 0 index at C: "<<static_cast<void*>(&lang[0])<<"\n";
    cout<<"Address of character 0 index at +: "<<static_cast<void*>(&lang[1])<<"\n";
    cout<<"Address of character 0 index at +: "<<static_cast<void*>(&lang[2])<<"\n";

  return 0;
}
