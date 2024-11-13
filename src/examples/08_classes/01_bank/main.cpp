#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>
#include<memory>

using std::cin; using std::cout;
using std::vector; using std::shared_ptr; using std::make_shared;

int main()

	
{

	shared_ptr<int> num_sp1 = make_shared<int>(10);
	cout<<*num_sp1<<"\n";
	cout<<num_sp1.use_count()<<"\n";
	shared_ptr<int> num_sp2 = num_sp1;
	cout<<*num_sp2<<"\n";
	cout<<num_sp2.use_count()<<"\n";
	
	/*Account account = get_account_by_value();
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
	return 0;*/
}