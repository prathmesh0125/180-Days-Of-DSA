#include <iostream>
using namespace std;
class customer
{
  string name;
  int accNum;
  int balance;
  static int total_balance;
  static int total_customer;

public:
  // constructor

  customer(string name, int accNum, int balance)
  {
    this->name = name;
    this->accNum = accNum;
    this->balance = balance;
    total_customer++;
    total_balance += balance;
  }

  static void accestatic()
  { // it only static variables
    cout <<"Toal number of customer"<< total_customer << endl;
    cout <<"toal balance "<< total_balance << endl;
  }
  void deposit(int amount)
  {
    if (amount > 0)
    {
      balance += amount;
      total_balance += amount;
    }
  }
  void withdrwa(int amount)
  {
    if (amount <= balance && amount > 0)
    {
      balance -= amount;
      total_balance -= amount;
    }
  }

  void display()
  {
    cout << name << " " << accNum << " " << balance << " " << total_customer << endl;
  }
  void display_total()
  {
    cout << total_customer << endl;
  }
};
int customer::total_customer = 0;
int customer::total_balance = 0;

int main()
{
  customer a1("prathmesh", 12332, 100);
  // a1.display();
  customer a2("R", 12332, 3000);
  // a2.display();

  // a2.display_total();
  customer a3("rt", 12332, 2000);
  // a3.display();

  // we can accses total_customer without object,first make it public;
  // customer::total_customer = 10;
  // a1.display_total();

  //  we can accses total_customer without objectand without making its public make it public  by using stactic member function
  a1.deposit(4000);
  a2.withdrwa(2000);
  customer::accestatic();
}