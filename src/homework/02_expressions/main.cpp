﻿//write include statements
#include<iostream>
#include"hwexpressions.h"


//write namespace using statement for cout
using namespace std;

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
	tip_amount = get_tip_amount(meal_amount, tip_rate/100);
	total = tip_amount + tax_amount + meal_amount;
	cout<< "Meal Amount: "<<meal_amount << endl;
	cout<< "Sales Tax: "<<tax_amount << endl;
	cout<< "Tip Amount: "<<tip_amount << endl;
	cout<< "Total: "<<total << endl;
  return 0;
}
