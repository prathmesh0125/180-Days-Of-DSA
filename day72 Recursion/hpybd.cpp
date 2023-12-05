#include<iostream>
using namespace std;
void RemaingDays(int n){
if(n==0){
  cout<<"Happy birthday!!! "<<endl;
  return;
}
  cout<<n<<" days left for birthday"<<endl;
  RemaingDays(n-1);
}
int main(){
  int n=10;
  RemaingDays(n);
}