#include<iostream>
using namespace std;
int main(){
  int a=10;
  int *p,*k;
  p=&a;
  k=p;
  cout<<p<<" "<<k<<endl;
  cout<<*k;
}