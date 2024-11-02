//bank_account.cpp
# include "bank_account.h"
using std::cout; using std::cin;
void Account::get_balance_from_db()
{
    balance = (rand()w10000)if;
}
void Account::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}


void Account::withdraw(int amount)


// Free Functions Not Part Of the Class
void display_balance(Account& account)
{
    cout<<"friend function: "<<account.balance<<"\n";
    account.balance = 0;
}