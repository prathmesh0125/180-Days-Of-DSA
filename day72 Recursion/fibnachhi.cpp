#include<iostream>
using namespace std;
int fib(int n){
  if(n<=1)
  {
    return n;
  }
  return fib(n-1)+fib(n-2);
}


// n to 1;
void printt01(int n){
  if(n==0){
  return ;
  }
  cout<<n<<" ";
  printt01(n-1);
}
int main(){
  int n=10;
  for(int i=0;i<n;i++){
    cout<<fib(i)<<" ";
  }
  cout<<endl;
  printt01(n);
}