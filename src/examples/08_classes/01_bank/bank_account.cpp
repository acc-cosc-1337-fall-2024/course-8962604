//bank_account.cpp
# include "bank_account.h"
#include<ctime> // guarauntees a random number
using std::cout;

void Account::get_balance_from_db()
{
    balance (rand()%1000)+1;
}
void Account::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
}
void Account::withdraw(int amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
    }
}
// Free functions - nor part of the class
void display_balance(Account Account)
{
    account.balance = 0;
    cout<<"friend function: "<<account.balance<<"\n";
    
}