#include<iostream>
using namespace std;

class customer{

  string name;
  int *data;
  public:
  customer(){
    name="prathmesh";
    data= new int;
    *data=10;
    cout<<"customer is called"<<endl;
  }
//  destructor :- ot is last function
  ~customer(){
    delete data;
 cout<<"distructor is called"<<endl;
  }

};

int main(){
 customer a1;
}