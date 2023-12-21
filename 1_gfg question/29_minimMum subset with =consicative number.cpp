#include<iostream>
#include<algorithm>
using namespace std;
int countSubset(int arr[],int n){
  sort(arr,arr+n);
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]+1==arr[i+1])
    continue;
    else
    count++;
  }
  return count;
}
int main(){
  int arr[10]={100, 56, 5, 6, 102, 58, 101, 57, 7, 103};
cout<<countSubset(arr,10);
}
