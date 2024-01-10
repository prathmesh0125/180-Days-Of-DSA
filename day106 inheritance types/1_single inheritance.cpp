#include <iostream>
using namespace std;
class human
{
protected:
  string name;
  int age;

public:
  void work()
  {
    cout << "i am work" << endl;
  }
  human(string name, int age)
  {
    this->name = name;
    this->age = age;
  }
  // it also present in child class but when we call first it check in thier near object if they see they can run display,if not in this then he check for above parent classb
  void display()
  {
    cout << name << " " << age << " " << endl;
  }
  // it is for working of order of constructor and distructor

  //   human(){
  //     cout<<"first "<<endl;
  //   }
  //  ~ human(){
  //     cout<<"first "<<endl;
  //   }
};

class student : public human
{
  int rollnumber, fees;

public:
  student(string name, int age, int rollnumber, int fees) : human(name, age)
  {
    // this->name=name;
    // this->age=age;
    this->rollnumber = rollnumber;
    this->fees = fees;
  }

  // it is for working of order of constructor and distructor
  //   student(){
  //     cout<<"second "<<endl;
  //   }
  //  ~ student(){
  //     cout<<"second "<<endl;
  //   }

  void display()
  {
    cout << name << " " << age << " " << rollnumber << " " << fees << endl;
  }
};

int main()
{
  // student a1;
  // human h;
  // h.work();
  student a1("xyz", 21, 43, 50890);
  a1.display();
  a1.work();
}