#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>arr){
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}
void intersectionOftwo(int arr1[],int arr2[],int n,int m){
  set<int>s;
  vector<int>arr;
  for(int i=0;i<n;i++){
    s.insert(arr1[i]);
  }
  for(int i=0;i<n;i++){
    s.insert(arr2[i]);
  }
  int i=0;
  for(auto it:s){
    arr.push_back(it);
  }
  print(arr);
}
int main(){
  int arr1[5]={1,2,3,4,5};
  int arr2[3]={1,2,3};
   intersectionOftwo(arr1,arr2,5,3);
}