#include <iostream>
using namespace std;
class person
{
protected:
  string name;

public:
  void introduce()
  {
    cout << "Hello my name is " << name << endl;
  }
};
class employee : public person
{
protected:
  int salary;

public:
  void monthlySalary()
  {
    cout << "my monthly salary is " << salary << endl;
  }
};

class manager:public employee{
  public:
  string department;
 
 manager(string name,int salary,string department){
  this->name=name;
  this->salary=salary;
  this->department=department;
 }
 void display(){
  cout<<name<<" "<<salary<<" "<<department<<endl;
 }

};
int main()
{
 manager m("Hashirama",32323,"headon of leaf");
 m.introduce();
 m.monthlySalary();
 m.display();
}