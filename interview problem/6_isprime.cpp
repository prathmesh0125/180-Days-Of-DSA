#include<iostream>
using namespace std;
int isprime(int n){
  if(n<2){
    return 0;
  }
  else{
    for(int i=2;i<n;i++){
      if(n%i==0){
        return 0;
      }
    }
  }
  return 1;
}

int main(){
  int n;
  cout<<"Enter number"<<endl;
  cin>>n;
  int ans=isprime(n);
  if(ans){
    cout<<"number is prime"<<endl;
  }
  else{
    cout<<"number is not prime"<<endl;

  }
}