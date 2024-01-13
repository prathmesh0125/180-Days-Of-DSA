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
    else
    {
       throw runtime_error("amount should be greater than 0");
    }
  }
  void withdraw(int ammount)
  {
    if (ammount > 0 && ammount <= balance)
    {
      balance -= ammount;
      cout << ammount << "is debited succefull" << endl;
    }
    else if (ammount < 0)
    {
      throw runtime_error("amount should be greater than 0");
    }
    else
    {
      throw runtime_error("amount is greater than balance");
    }
  }
};
int main()
{
  customer c("xyz", 1000, 1132);
  try
  {
    c.deposit(100);
    c.withdraw(-1200);
  }catch(const runtime_error &e){
    cout<<"exeception occcured: "<<e.what()<<endl;
  }
}