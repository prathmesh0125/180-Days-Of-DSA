#include<iostream>
using namespace std;
int subSetsum(int arr[],int i,int n,int sum){
  if(i==n){
  //  if(sum==0) return 1;
  //  else return 0;
  return sum==0;
  }

  return subSetsum(arr,i+1,n,sum)+subSetsum(arr,i+1,n,sum-arr[i]);
}
int main(){
  int arr[3]={1,2,3};
  int sum=3;
  cout<<subSetsum(arr,0,3,sum);
}