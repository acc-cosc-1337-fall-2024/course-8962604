//savings_account.h
#include "bank_account.h"
#ifndef Saving_Account_H
#define Saving_Account_H
class SavingsAccount: public Account
{
    public:
        SavingsAccount(){some_function();}
        SavingsAccount(int b): Account(b){}
        int get_balance() const{return Account::get_balance() + {Acccount::get_balanc() * 0.5 / 12};}
 };

#endif