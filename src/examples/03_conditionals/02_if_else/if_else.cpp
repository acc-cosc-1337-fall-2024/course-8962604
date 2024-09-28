//write include statement for if_else header file
#include "if_else.h"

using std::string;

//write code for the is_even function that returns true if num is even, false otherwise
string get_generation(int year)
{
    string generation = "";
    if (year >= 1910 && year <= 1924)
    {
       generation = "The Greatest generation";
    }
    else if (year >= 1912 && year <= 1945)
    {
        generation = "The Silent Generation";
    }
    else if (year >= 1946 && year <= 1964)
    {
       generation = "The baby Boomer Generation";
    }
    else if (year >= 1965 && year <= 1979)
    {
       generation = "Generation X";
    }
    else if (year >= 1980 && year <= 1994)
    {
       generation = "Generation Y";
    }
    else if(year >= 1995 && year <= 2012)
    {
       generation = "Generation Z";
    }
    else if (year >= 2013 && year <= 2025)
    {
       generation = "Generation Alpha";
    }
    else
    {
       generation = "Invalid Year";
    }
    return generation;

}
