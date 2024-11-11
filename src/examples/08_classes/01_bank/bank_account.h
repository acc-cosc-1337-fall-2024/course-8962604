#include<iostream>
#include<cstdlib> //access to ran
#include<ctime> // guarauntees a random number
//bank_account.h
class Account
{
friend void display_balance(Account Account);
public:
    Account(){balance += 100; std::cout<<"Default contructor\n";get_balance_from_db(); }//default constrctor - does nothing
    Account(int b) : balance(b){std::cout<<"constructor with one param\n";}//constructor
    int get_balance()const{return balance;}//inline
    void deposit(int amount);
    void withdraw(int amount);
//by default all functions/variables are private
private: //access specifier
    int balance;
    void get_balance_from_db();
};