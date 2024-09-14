#include "hwexpressions.h"
# define TAX_RATE 0.0675

//example
double get_sales_tax_amount(double meal_amount)
{

	return TAX_RATE * meal_amount;
}

double get_tip_amount(double meal_amount, double tip_rate)
{ 
   
 
	return meal_amount * tip_rate;

}




