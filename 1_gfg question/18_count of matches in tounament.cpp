#include<iostream>
using namespace std;
int numberofMaches(int n){
  // return n-1;
  if(n==1) return 0;
  if(n%2==0){
    return n/2+numberofMaches(n/2);

  }
  else{
    return n/2+numberofMaches((n-1)/2+1);
  }
}
int main(){
  int n=7;
  cout<<numberofMaches(n);
}