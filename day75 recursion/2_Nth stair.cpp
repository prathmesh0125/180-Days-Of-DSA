#include<iostream>
using namespace std;
int totalWays(int n){
  if(n<=1){
    return 1;
  }
  return totalWays(n-1)+totalWays(n-2);
}
int main(){
  int n=4;
  cout<<totalWays(n);
}