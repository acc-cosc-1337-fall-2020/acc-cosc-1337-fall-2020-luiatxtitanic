#include <iostream>
#include"bank_account.h"

using std::cout;

int main()
{
  Bank_Account account;
	std::cout<<"balance: "<<account.get_balance();
  return 0;
}