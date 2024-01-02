#include<iostream>
using namespace std;

// padding
class a{
  char c;
  int b;
  char d;
  double de;
  // char e;
  // char g;
  // char f;
};

class student{
  public:
  int age;
  string name;
};
int main(){
a obj1;
cout<<sizeof(obj1)<<endl;
// it ans is 5byte but it gives 8 byte
// for memory allocation it use padding

student *s=new student;
(*s).name="prathmesh";
cout<<(*s).name<<endl;
cout<<s->name<<endl;



}
