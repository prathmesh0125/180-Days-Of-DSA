#include<iostream>
using namespace std;
int findpivot(int arr[],int n){
  int start=0;
  int end=n-1;
  while (start<end)
  {
    int mid=(start+end)/2;
    if(arr[mid]>=arr[0]){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return end;
  
}
int main(){
  int arr[7]={4, 5, 6, 7, 0, 1, 2};
  int target= 0;
  cout<<findpivot(arr,7);
}