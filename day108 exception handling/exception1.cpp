#include <iostream>
using namespace std;
class customer
{
  string name;
  int balance, account_number;

public:
  customer(string name, int balance, int account_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }
  // deposti
  void deposit(int ammount)
  {
    if (ammount > 0)
    {
      cout << ammount << " is credited succefull" << endl;
    }
    else{
      cout<<"amount should be greater than 0"<<endl;
    }
  }
  void withdraw(int ammount)
  {
    if (ammount > 0 && ammount<=balance)
    {
      balance-=ammount;
      cout << ammount << "is debited succefull" << endl;
    }
    else if(ammount<0){
      cout<<"amount should be greater than 0"<<endl;

    }
    else{
      cout<<"amount is greater than balance"<<endl;

    }
  }
};
int main()
{
  customer c("xyz",1000,1132);
  c.deposit(100);
  c.withdraw(1200);
}