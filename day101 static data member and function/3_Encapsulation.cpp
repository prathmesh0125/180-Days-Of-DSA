#include <iostream>
using namespace std;
class customer
{
  string name;
  int balance;
  int age;

public:
  customer(string n, int b, int a)
  {
    name = n;
    balance = b;
    age = a;
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
  void updateAge(int a)
  {

    if (a <= 100 && a > 0)
    {
      age = a;
    }
    else
    {
      cout << "invalid age" << endl;
    }
  }

  void display()
  {
    cout << name << " " << balance << " " << age << endl;
  }
};

// int customer::balance = 0;
int main()
{
  customer a1("prathmesh", 100, 10);
  a1.deposit(100);
  a1.updateAge(-20);
  a1.display();
}