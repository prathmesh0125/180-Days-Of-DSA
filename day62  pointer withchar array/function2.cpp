#include<iostream>
using namespace std;
int swaping(int *f,int *s){//pass by pointer
  int temp=*f;
  *f=*s;
  *s=temp;
}
int swaping2(int &f,int &s){//pass by referance
  int temp=f;
  f=s;
  s=temp;
}
int main(){
  int first=4;
  int second=2;
  // swaping(&first,&second);
  swaping2(first,second);
  cout<<first<<" "<<second;
}