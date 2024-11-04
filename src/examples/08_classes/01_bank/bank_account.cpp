//bank_account.cpp
# include "bank_account.h"
#include<ctime> // guarauntees a random number

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