#include<iostream>
using namespace std;
#include<vector>
void print(int arr[],int index ,int n,int sum,vector<int>&ans){
  if(index==n){
    // cout<<sum<<" ";
    ans.push_back(sum);
    return;
  }
  print(arr,index+1,n,sum,ans);
  print(arr,index+1,n,sum+arr[index],ans);
}
int main(){
  int arr[4]={1,2,3,4};
  vector<int>ans;
  int sum=0;
  print(arr,0,4,sum,ans);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}