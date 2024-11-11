//checking_account.h
#include "bank_account.h"
#ifndef CheckingAccount_H
#define CheckingAccount_H


class CheckingAccount: public Account
{
public:
    CheckingAccount(){}
    CheckingAccount(int b) :Account(b){}
};
#endif