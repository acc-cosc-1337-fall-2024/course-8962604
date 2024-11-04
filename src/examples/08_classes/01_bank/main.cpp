#include "bank_account.h"

using std::cin; using std::cout;

int main()

{
	auto balance = 0;
	cout<<"Enter an amount: ";
	cin>>balance;

	Account account(balance); // represents a customer account

	cout<<account.get_balance()<<"\n";

	return 0;
}