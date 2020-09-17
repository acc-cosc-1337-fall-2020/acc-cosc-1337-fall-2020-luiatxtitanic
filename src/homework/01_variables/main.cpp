#include <iostream>
#include "variables.h"

using std::cout; using std::cin;

int main()
{
  double meal_amount,
         tip_amount,
         tax_amount,
         tip_rate,
         total;
cout << "how much is you meal: ";
cin>>meal_amount;
tax_amount = get_sales_tax_amount(meal_amount);

cout << "what tip rate do you want to pay: ";
cin>>tip_rate;

tip_amount = get_tip_amount(meal_amount, tip_rate);

total = tip_amount + tax_amount + meal_amount;

cout<< "meal amount: " << meal_amount << "\n";
cout<< "sales tax: " << tax_amount << "\n";
cout<< "tip amount: " << tip_amount << "\n";
cout<< "total: " << total << "\n";
  //double TAX_RATE, meal_amount;
	//std::cout << "sales tax is: " << TAX_RATE * meal_amount << ".\n";

	return 0;
}
