//write include statements
#include<iostream>
#include"hwexpressions.h"


//write namespace using statement for cout
using std::cout; using std::cin;

int main()

{
    double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;
	cout<<"Enter a meal amount: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout<<"Enter a tip rate: ";
	cin>>tip_rate;
	cout<<meal_amount;
	cout<<tip_rate;
	cout<<tip_amount;
	cout<<tax_amount;
	cout<<total;
	tip_amount = get_tip_amount(meal_amount, tip_rate/100);
	total = tip_amount + tax_amount + meal_amount;
	cout<< "Meal Amount:  ";
	cout<< "Sales Tax: ";
	cout<< "Tip Amount: ";
	cout<< "Total Amount: ";
  return 0;
}
