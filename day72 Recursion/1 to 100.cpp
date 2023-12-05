#include<iostream>
using namespace std;
void print1t0100(int n){
if(n>100){
  return;
}
cout<<n<<" ";
print1t0100(n+1);
}

int main(){
  int n=1;
  print1t0100(n);
}