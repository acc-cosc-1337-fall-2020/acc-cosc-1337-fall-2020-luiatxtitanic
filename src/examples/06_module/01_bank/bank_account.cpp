//bank_account.cpp
#include "bank_account.h"

void Bank_Account::deposit(int amount)
{
  if(amount > 0)
  {
    balance += amount;
  }
}