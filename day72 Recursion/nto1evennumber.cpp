#include<iostream>
using namespace std;
void Even(int n){
  if(n<2){
return ;
  }
  // if(n%2==0){
  // }
    cout<<n<<" ";
  Even(n-2);
}
int main(){
  int n=8;
  Even(n);
}