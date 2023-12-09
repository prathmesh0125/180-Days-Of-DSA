#include<iostream>
#include<vector>
#include<algorithm>
#include <utility>
using namespace std;
pair<int, int> MaximumSubarraySum(vector<int>arr,int n,int s){
  int sum=0;

  int start=0;
  int end=0;
  while(end<n){
    sum+=arr[end];
    while(sum>s && start<end){
      sum-=arr[start];
      start++;
    }
    if(sum==s){
      return {start+1,end+1};
    }

    end++;
  }
  return {-1,-1};
}
int main(){
  vector<int>arr={1,2,3,7,5};
  int s=12;
  auto ans=MaximumSubarraySum(arr,5,s);
  if(ans.first!=-1 && ans.second!=-1){
    cout<<ans.first<<" "<<ans.second<<endl;
  }
  else{
    cout<<ans.first<<" "<<ans.second<<endl;

  }
}
