#include <iostream>
using namespace std;

class human
{
public:
  string name;
  int age, weight;
};

class student : private human
{
private:
  int roll_number, fees;

public:
  void fun(string n, int a, int w)
  {
    name = n;
    age = a;
    weight = w;
  }
  void display(){
    cout<<name<<" "<<age<<" "<<weight<<" ";
  } 
};

int main()
{
  student a;
  a.fun("madara",12,40);
  a.display();
}