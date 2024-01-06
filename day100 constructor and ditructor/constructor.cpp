#include <iostream>
using namespace std;

class customer
{
  string name;
  int accNum;
  int balance;
  int *roi;

public:
  // default constructor
  customer()
  {
    cout << "constructor called" << endl;
    roi = new int[100]; // i want this space metion in starting required space
  }

  // parametrized contructor
  // customer(string a, int b, int c)
  // {
  //   name = a;
  //   accNum = b;
  //   balance = c;
  // }
  // constructor overloading
  customer(string name, int accnum)
  {
    this->name = name;
    this->accNum = accNum;
    (*this).balance = 190;
  }

  inline customer(string a, int b, int v) : name(a), accNum(b), balance(v)
  {
  }
  // copy customer

  customer(customer &b)
  {
    name = b.name;
    accNum = b.accNum;
    balance = b.balance;
  }
  void display()
  {
    cout << name << " " << accNum << " " << balance << " " << endl;
  }
};

int main()
{
  customer a;
  customer a1("prathmesh", 122332, 1000);
  customer a3("r", 1233);
  a1.display();
  a3.display();
  customer a4(a3);
  a4.display();
  // another method to copy value;
  customer a5;
  a5 = a3;
  a5.display();
}