#include<iostream>
using namespace std;
class area{

public:
int calulatearea(int r){//cirlce
  return 3.14*r*r;
}
int calulatearea(int l,int w){//rectangle
  return l*w;
}


};
int main(){
area a;
cout<<a.calulatearea(4)<<endl;
cout<<a.calulatearea(4,4);
}