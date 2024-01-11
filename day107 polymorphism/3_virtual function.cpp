#include<iostream>
using namespace std;

class animal{
public:

// virtual void speak()=0;// virtual function we cant create object of this class
virtual void speak(){
cout<<" huhu"<<endl;
}
};

class dog:public animal{
  public:
  void speak(){
    cout<<"bark"<<endl;
  }
};
int main(){
  animal *p;
  p=new dog();
(*p).speak();
}