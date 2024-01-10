#include<iostream>
using namespace std;
class engnineer{
  public:
  string specilization;

  void work(){
    cout<<"i hava specilization in "<<specilization<<endl;
  }
};

class youtuber{
  public:
  int subscriber;

  void  contentcreator(){  
    cout<<"i have subscriber base of "<<subscriber<<endl;
  }
};

class codetecher:public engnineer,public youtuber{
  public:
  string name;

  codetecher(string name,string specilization,int subscriber){
  this->name=name;
  this->specilization=specilization;
  this->subscriber=subscriber;
 }

 void display(){
  work();
  contentcreator();
  cout<<name<<" "<<specilization<<" "<<subscriber<<endl;
 }
};


int main(){

codetecher c("rohit","IT",34433);
c.display();
}