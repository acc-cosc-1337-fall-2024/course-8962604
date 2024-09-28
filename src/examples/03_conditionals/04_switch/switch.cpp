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

enum menu_options {customers, payables, receivables, exit};

string menu_options(int num)
{
 string option = "";
 switch (num)
 {
case customers:// if or if else 
   option = "option 1";
   break;
case payables:
   option = "option 2";
   break;
case receivables:
   option = "option 3";
   break;
case exit:
   option = "Option 4";
   break;
default:
   option = "Invalid Option";
   break;
 }
return 0;
}


