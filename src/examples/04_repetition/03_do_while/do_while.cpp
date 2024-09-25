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

  }while (choice == 'Y' || choice =='y');

}
void display_menu()
{
  cout<<"1 option 1";
  cout<<"2 option 2";
  cout<<"3 exit";
}
void run_menu()
    auto option = 0;
do
{
    display_menu();
    cout<<"Enter a menu option";
    cin>>option;

}
void handle_user_option(int num)
switch(num)

{





}


