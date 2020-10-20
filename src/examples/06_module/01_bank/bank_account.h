//bank_account.h
class Bank_Account
{
public:
  Bank_Account() : balance(0){};
  explicit Bank_Account(int b) : balance(b)
  int get_balance()const{return balance;} //const make them read only
  void deposit(int amount);
  void withdraw(int amount);
  friend void display_balance(const BankAccount& a);
  friend void Branchbank::update_balance(int b);
  static int get_bank_balance(){return bank_balance;}
  friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);
  friend std::istream& operator>>(std::istream& in, BankAccount& a);
  friend BankAccount operator+(const BankAccount& a1, const BankAccount& );
private: //access specifier
  
  int balance{0};
  static int bank_balace;
};//very important
