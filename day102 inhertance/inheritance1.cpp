#include <iostream>
using namespace std;

class human
{
  string religion, color;

public:
  string name;
  int age, weight, fees;
};

class student : protected human
{

private:
  int roll_number, fees;

public:
  student(string name, int age, int weight, int roll_number, int fees)
  {
    this->name = name;
    this->age = age;
    this->weight = weight;
    this->roll_number = roll_number;
    this->fees = fees;
  }

  void display()
  {
    cout << name << " " << age << " " << weight << " " << roll_number << " " << fees;
  }
};

class teacher : public human
{
  int salary;
  int id;

public:
  teacher(string name,int salary, int id)
  {
    this->name=name;
    this->salary = salary;
    this->id = id;
  }
    void display()
  {
    cout << name << " " << salary << " " << id;
  }
};

int main()
{
  student s("prathmesh", 21, 45, 70, 93000);
  s.display();
  teacher t("jirya",10000,242);
  t.display();
}