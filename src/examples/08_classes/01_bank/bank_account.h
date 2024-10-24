#include <iostream>
#include <stdlib> //accces to ran


//bank_account.h
class Account
{
public:
    Account(){std::cout<<"Default Constructor\n": get_balance_from_db()}//default constructor
    Account(int b) : balance(b){std::cout<<"Constructor w 1 param\n"}//constructor
    int get_balance() const{return balance;}// inline
    void deposit(int amount);
// by default all functions/variables are private
private://access specifier
    int balance;
    void get_balance_from_db();
};