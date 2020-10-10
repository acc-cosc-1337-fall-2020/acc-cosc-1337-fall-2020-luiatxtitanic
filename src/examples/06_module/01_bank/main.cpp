#include <iostream>
#include"bank_account.h"

using std::cout;

int main()
{
  Bank_Account account(100);
	std::cout<<"balance: "<<checking_account.get_balance()<<"\n\n";

  Bank_Account new_account;
  cout<<"Balance: "<<new_account.get_balance()<<"\n";

  display_bank_account_data(new_account);

  cout<<"blance: " <<new_account.get_balance()<<"\n";

  return 0;
}