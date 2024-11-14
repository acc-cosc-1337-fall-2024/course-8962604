//atm.h
//header guard
#include "bank_account.h"
#include<iostream>
#include<memory>
#include<vector>
#ifndef ATM_H
#define ATM_H
class ATM
{
public:
ATM(Account a): account(a){/*empty code block*/}
void display_balance();
void make_deposit();
void make_withdraw();
private:
Account &account;
}
#endif

// free functions
void main_menu()
