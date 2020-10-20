#include <iostream>
#include"bank_account.h"
#include"atm.h"
#include<stdlib.h>
#include<time.h>


using std::cout; using std::cin;

int main()
{
srand(time(NULL));

//BankAccount account(100), account1(500);
//BankAccount account2 = account + account1;
int choice;

switch (static_cast<Bank_OPTIONS>(choice)):
{
  case BANK_OPTIONS::DEPOSIT;
  cout<<"you selected withdrawl\n";

    break;
  case WTIHDRAWL:
    COUT<<"YOU SELECTED DEPOSIT\N";
    break;
  case DISPLAY:
    atm.display balance();
    break;
    default:
    cout<<"invalid choice\n";
}
cout<<"enter y to continue: ";
cin >>cont;

}

/*cout<<account;

cin>>account:

cout<<account;
cout<<"balance"<<account.get_balance()<<"\n\n";

int choice;
ATM atm;

do{


ATM atm;
atm.scan_card();
atm.display_balance();
cout<<"enter 1 to continue..";
cin>>choice;
}

  Bank_Account account(100);
	std::cout<<"balance: "<<checking_account.get_balance()<<"\n\n";

  Bank_Account new_account;
  cout<<"Balance: "<<new_account.get_balance()<<"\n";

  display_bank_account_data(new_account);

  cout<<"blance: " <<new_account.get_balance()<<"\n";

  return 0;*/
}