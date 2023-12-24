#include<iostream>
using namespace std;
int Search(int arr[],int n,int target){
  int start=0;
  int end=n-1;
  while(start<=end){
    int mid=(start+end)/2;
    if(arr[mid]==target){
      return 1;
    }
    else if(arr[mid]>=arr[0]){
      if(target>arr[start] && target<arr[mid]){
        end=mid-1;
      }
      else{
        start=mid+1;
      }
    }
    else{
      if(target>arr[mid] && target<arr[end]){
        start=mid+1;
      }
      else{
        end=mid-1;
      }
    }
  }
  return 0;
}
int main(){
  int arr[7]={4, 5, 6, 7, 0, 1, 2};
  int target=0;
  cout<<Search(arr,7,target);
}