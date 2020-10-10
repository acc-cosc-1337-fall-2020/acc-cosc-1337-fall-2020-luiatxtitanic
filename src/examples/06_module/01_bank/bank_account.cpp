//bank_account.cpp
#include "bank_account.h"

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
