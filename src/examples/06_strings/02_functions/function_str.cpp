# include <iostream>
# include "function.str.h"
using std::cout;
void copy_string_param(std::string &str)
{
   cout<<str<<"\n"//abc
   for (auto &ch: str)
   {
     ch = 'x';
   }

   cout<<str<<"\n"//xxx
}

void ref_string_param(std::string &str)

    cout<<str<<"\n"
{
   for (auto &ch: str)
   {
     ch = 'x';
   }

   cout<<str<<"\n"//xxx
}
void ref_loop(std::string &str)
{
    cout<<str<<"\n";
   for (auto &ch: str)
   {
     ch = 'x';
   }

   cout<<str<<"\n";//xxx
}