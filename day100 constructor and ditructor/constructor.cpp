#include <iostream>
using namespace std;

class customer
{
  string name;
  int accNum;
  int balance;

public:
  customer()
  {
    cout << "constructor called" << endl;
  }
  customer(string a, int b, int c)
  {
    name = a;
    accNum = b;
    balance = c;
  }
  // constructor overloading
  customer(string name,int accnum){ 
   this->name=name;
  this->accNum=accNum;
   (*this).balance=190;
  }
  void display(){
    cout<<name<<" "<<accNum<<" "<<balance<<" "<<endl;
  }
};

int main()
{
  customer a ,a1("prathmesh",122332,1000);
  customer a3("r",1233);
  a1.display();
  a3.display();
}