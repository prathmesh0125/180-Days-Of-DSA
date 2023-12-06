#include<iostream>
using namespace std;
int countX(int l,int r,int x){
  int ans=0;
  for(int i=l+1;i<r;i++){
    int temp=i;
    while(temp){
      int digit=temp%10;
      if(digit==x){
        ans++;
      }
      temp/=10;
    }
  }
  return ans;


}
int main(){
  int l=10,r=19,x=1;
  cout<<countX(l,r,x);
}