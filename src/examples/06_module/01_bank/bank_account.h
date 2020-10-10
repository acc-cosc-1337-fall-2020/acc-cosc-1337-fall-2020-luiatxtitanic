//bank_account.h
class Bank_Account
{
public:
  Bank_Account() : balance(0){};
  Bank_Account(int b) : balance(b)
  int get_balance()const{return balance;} //const make them read only
  void deposit(int amount);
  void withdraw(int amount);
private: //access specifier
  int balance{0};

};//very important
