#include <iostream>
using namespace std;
class customer
{
  string name;
  int balance;

public:
  customer(string n, int b)
  {
    name = n;
    balance = b;
  }

  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
    }
    else
    {
      cout << "amount is not valid" << endl;
    }
  }


  void display()
  {
    cout << name << " " << balance << " " << endl;
  }
};

// int customer::balance = 0;
int main()
{
  customer a1("prathmesh", 100);
  a1.deposit(100);
  a1.display();
}