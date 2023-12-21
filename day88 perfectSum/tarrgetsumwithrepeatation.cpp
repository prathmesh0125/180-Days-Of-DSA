#include<iostream>
using namespace std;
int RepeatationSum(int arr[],int i,int n,int sum){
  if(sum==0) return 1;
  if(i==n || sum<0) return 0;

  return RepeatationSum(arr,i+1,n,sum)+RepeatationSum(arr,i,n,sum-arr[i]);
}
int main(){
  int arr[3]={2,3,4};
  int sum=6;
  cout<<RepeatationSum(arr,0,3,sum);
}