
#include "variables.h"

const double TAX_RATE = 0.0675;
double get_sales_tax_amount(double meal_amount)
{
	
  return meal_amount * TAX_RATE;
}

double get_tip_amount(double meal_amount,double tip_rate)
{

  return meal_amount * tip_rate;
}
//write code for multiply_numbers function here
//function returns product of num1 and num2




