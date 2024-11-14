//atm.cpp
# include "atm.h"
using std::cout; using std::cin;
using std::unique_ptr; using std::
void ATM::display_balance()
{
    cout<<"Balance:"<<account.get_balance()<<"\n";
}
void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter deposit ammount";
    cin>>amount;
    account.deposit(amount);
}
void ATM::make_withdraw()
{
    auto amount = 0;
    cout<<"Enter withdraw ammount";
    cin>>amount;
    account.withdraw(amount);
}