#include<iostream>
using namespace std;
int SumOfN(int n){
  if(n==1)
  {
    return 1;
  }
  return n+SumOfN(n-1);
}
int main()
{
  int n=6;
  cout<<SumOfN(n);
}