//write include statement for switch header
#include "switch.h"

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise
using std::string;

enum menu_option {customers = 1, payables, receivables, exit};

std::string menu_options(int num)

{
    string option = "";
    switch (num)

    {
        case customers: //if or if else
        option = "option 1";
        break;
        case payables: 
        option = "option 2";
        break;
        case receivables:
        option = "option 3";
        break;
        case exit:
        option = "option 4";
        break;
        default: // if else
        option = "invalid Option";
        break;
    }
return 0;
}

