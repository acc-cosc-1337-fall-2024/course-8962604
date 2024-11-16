#include<iostream>
#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include<memory>

using std::cin; using std::cout;
using std::vector; using std::unique_ptr; using std::make_unique;

int main()

	
{
	auto account_index = 0;
	vector<unique_ptr><Account> accounts;
	accounts.push_back(make_unique<CheckingsAccount>());
	accounts.push_back(make_unique<SavingsAccount>());

	cout<<account[0]->get.balance()<<"\n";
	cout<<account[1]->get.balance()<<"\n";

	display_menu();
	cout<<"Enter menu choice: ";
	cin>>account_index;
	auto* account = account[account_index - 1].get();

	void display_menu()
	{
		cout<<"Acc checking:";
		cout<<"Deposit:";
		cout<<"Withdrawal:";
		cout<<"Balance:";
		cout<<"Exit";
	}
	void handle_menu_options(ATM& atm, int menu_choice)
	{	switch()
		{

		}
	}

	Account account = get_account_by_value();
	Account account; //object/instance(variable)
	display_balance(account);
	cout<<"Main: "<<account.get_balance()<<"\n";
	cout<<account.get_bank_balance()<<"\n";
	auto account_index = 0;
	vector<account> accounts {CheckingAccount(), SavingsAccount()};
	cout<<"1-Checking, 2-Savings";
	cin>>account_index;
	Account accounts = accounts[account_index - 1 ]
	Account account(1000);
	ATM atm(account);
	atm.display_balance();

	atm.make_deposit();
	atm.display_balance();

	atm.make_withdraw();
	atm.display_balance();

	std::cout<<account.get_balance()<<"\n";
	cout<<account.get_bank_balance()<<"\n";
	account[1].get_bank_balance;

	vector<Account> accounts;
	auto balance = 0;
	cout<<"Enter an amount: ";
	cin>>balance;

	Account account1(balance); // represents a customer account
	accounts.push_back(account1);
	cout<<"Enter an amount: ";
	cin>>balance;
	
	Account account2(balance); // represents a customer account
	accounts.push_back(account2);
	cout<<"Enter an amount: ";
	cin>>balance;
	
	for (auto account: accounts)
	{
	cout<<account.get_balance()<<"\n";
	}
	return 0;
}