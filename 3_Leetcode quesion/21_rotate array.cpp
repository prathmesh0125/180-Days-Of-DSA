#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&nums){
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
}

void reverse(vector<int>&nums,int start,int end){
  while(start<=end){
    swap(nums[start++],nums[end--]);
  }
}
int main(){
  vector<int>nums={1,2,3,4,5,6,7};
  int n=nums.size();
  int k=3;
  k=k%nums.size();
  reverse(nums,0,n-k-1);
  reverse(nums,n-k,n-1);
  reverse(nums,0,n-1);
  print(nums);
}