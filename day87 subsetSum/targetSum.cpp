#include<iostream>
using namespace std;
bool FindSum(int arr[],int i,int n,int target){
  if(target==0)return 1;
  if(i==n || i<0)return 0;
  return FindSum(arr,i+1,n,target)|| FindSum(arr,i+1,n,target-arr[i]);
}
int main(){
  int arr[]={2,4,1,8,7};
  int target=19;
  cout<<FindSum(arr,0,5,target)<<" ";
}