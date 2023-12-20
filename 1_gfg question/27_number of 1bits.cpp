// sebits mean which bit is on or 1;
#include<iostream>
using namespace std;
int SetBits(int n){
  int setbits=0;
  while(n>0){
   n=n&(n-1);
   setbits++;
  }
  return setbits;
}
int main(){
  int n=6;
  cout<<SetBits(n);
}