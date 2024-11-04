#include<iostream>
//bank_account.h
class Account
{
public:
    Account(){std::cout<<"Default contructor\n";}//default constrctor - does nothing
    Account(int b) : balance(b){std::cout<<"constructor with one param\n";}//constructor
    int get_balance(){return balance;}//inline
//by default all functions/variables are private
private: //access specifier
    int balance;
};