#include "bank_account.h"

using std::cout; using std::cin;

int main()
{
	Account account;// object instance(variable)
	display.balance(account);

	cout<<"Main: "<<account.get_balance()<<"\n";

	Account account(1000);
	ATM atm(account);

	atm.display_balance();

	atm.make_deposit();
	atm.display_balance();
	

	return 0;
}