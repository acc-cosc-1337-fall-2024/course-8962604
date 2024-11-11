#include "bank_account.h"
#include<vector>

using std::cin; using std::cout;
using std::vector;

int main()

{
	Account account; //object/instance(variable)
	display_balance(account);
	cout<<"Main: "<<account.get_balance()<<"\n";

	/*vector<Account> accounts;
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
	cout<<account.get_balance()<<"\n";*/
	}
	return 0;
}