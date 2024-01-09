#include<iostream>
using namespace std;
int Minimum(int arr[],int n){
  int start=0;
  int end=n-1;
  while(start<end)
  {
    int mid=(start+end)/2;
    if(arr[start]<arr[end]){
      break;
    }
    if(arr[mid]>=arr[0]){
      start=mid+1;
    }
    else{
      end=mid;
    }
  }
  return arr[start];
}

int main(){
  int arr[7]={10, 20, 30, 40, 50, 5, 7};
  cout<<Minimum(arr,7);
}