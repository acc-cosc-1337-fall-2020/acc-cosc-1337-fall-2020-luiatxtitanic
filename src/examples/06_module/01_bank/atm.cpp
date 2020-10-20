//atm.cpp
#include "atm.h"

using std::cout;
ATM::ATM() 
{
accounts.push_back(BankAccount(get_balance_from_db()));
accounts.push_back(BankAccount(get_balance_from_db()));
accounts.push_back(BankAccount(get_balance_from_db()));
accounts.push_back(BankAccount(get_balance_from_db()));
}

void ATM::scan_card()
{
  bank
}

void ATM::display_balance()const
{
cout<<"balance: "<<account.get_balance()<<"\n";
}

int ATM::get_balance_from_db()
{
  return rand() % 10000 * 1
}
