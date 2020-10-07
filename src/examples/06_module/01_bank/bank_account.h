//bank_account.h
class Bank_Account
{
public:
  int get_balance()const{return balance;}
  void deposit(int amount);

private://access specifier
  int balance{0};

};//very important
