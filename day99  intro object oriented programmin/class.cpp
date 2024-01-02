#include<iostream>
using namespace std;

class student{

  public:
 string name;
 int age,roll_number;
 string grade;
//  function getter and setter
void setname(string s){
  if(s.size()==0){
    cout<<"invalid name"<<endl;
    return;
  }
  name=s;
}
void setage(int n){
  age=n;
}
void setroll(int r){
roll_number=r;
}
void setgrade(string g){
  grade=g;
}

// print
void getname(){
  cout<<name<<endl;
}
void getage(){
  cout<<age<<endl;
}
void getroll(){
  cout<<roll_number<<endl;
}
void getgrade(int pin){
  if(pin==123){
  cout<<grade<<endl;
       return;
  }
  cout<<"invalid pin"<<endl;
}
int get_roll(){
  return roll_number;
}
};
int main(){
student s1;
// s1.name="xyz";
// cout<<s1.name;
s1.setname("");
// cout<<s1.name;
s1.setage(20);
// cout<<s1.age;
s1.setroll(67);
// cout<<s1.roll_number;
s1.setgrade("a+");
// cout<<s1.grade;
s1.getname();
s1.getage();
s1.getroll();
s1.getgrade(13);
cout<<s1.get_roll()<<endl;

}