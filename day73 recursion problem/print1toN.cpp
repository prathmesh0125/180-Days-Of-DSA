#include<iostream>
using namespace std;

void print(int n){
  if(n==1){
    cout<<n<<" ";
    return ;
  }
  print(n-1);
  cout<<n<<" ";
}
int main(){
  int n=5;
  print(n);
}