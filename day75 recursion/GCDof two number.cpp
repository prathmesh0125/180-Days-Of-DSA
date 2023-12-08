#include<iostream>
using namespace std;
int GCD(int a,int b){
  if(b==0){
    return a;
  }
  return GCD(b,a%b);
}
int main(){
  int n1=12;
  int n2=39;
  cout<<GCD(n1,n2);
}