#include "void.h"

using std::string;

void display_string_characters(const std::string str)
{
    for (auto i=0; i < str.size(); i++)
    {

        cout<<str.size[i]<<"\n";

    }

}
void replace_character_in_string(std::string str, char target, char replace_value)
{
   for(auto i=0; i < str.size(); i++)
   {
        if(str[i] == target)
        {
            str[i] = replace_value;
        }
   } 

   cout<<str<<"\n";

}