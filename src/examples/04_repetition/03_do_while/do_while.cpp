#include "do_while.h"

using std::cout; using std::cin;

//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
  auto choice = 'Y';

  do
  {
    cout<<"Enter Y or y to continue...";
    cin>>choice;

  }while (choice == 'Y' || choice == 'y');

}
void display_menu()
{
  cout<<"1 option 1";
  cout<<"2 option 2";
  cout<<"3 exit\n";
}
void run_menu()
    auto option = 0;
do
{
    display_menu();
    cout<<"Enter a menu option";
    cin>>option;
    handle_user_option(option);
while(option != 3);
}
void handle_user_option(int num)
{
auto num1 = 0;
int result1;
auto letter = 'a';
switch(num)
{
case 1:
auto letter = 'a';
cout<<"Enter a char\n";
cin>>letter;
}
}break,


