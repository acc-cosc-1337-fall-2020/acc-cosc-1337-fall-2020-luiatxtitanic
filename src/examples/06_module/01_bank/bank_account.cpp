
#include <iostream>//bank_account.cpp
#include "bank_account.h"

using std::cout; using std::cin;
Bank_Account::Bank_Account(int b)
{


}

void Bank_Account::deposit(int amount)
{
  if(amount > 0)
  {
    balance += amount;
  }
}
void Bank_Account::withdraw(int amount)
{
  if(amount > 0 && balance >= amount)
  {
    balance += amount;
  }
}
void BankAccount::get_balance_from_db()
{
  balance = rand() % 10000 + 1;
}
std::istream& operator>>(std::istream& in, BankAcount& a)
{
  int amount;
  std::cout<<"enter amount; ";
  in>>amount;
  a.balance += amount;

  return in;


}

BankAccoutn operator+(const BankAccount& a1, const BankAccount& a2)
{
BankAccoutn (a1.get_balance() + a2.get_balance());

return account;
}