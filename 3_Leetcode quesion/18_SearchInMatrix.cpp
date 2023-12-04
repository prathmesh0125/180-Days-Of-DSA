#include<iostream>
using namespace std;

int SearchMatrix(int arr[][2],int n,int x){
  int row=n;
  int col=n;
  int start=0;
  int end=row*col-1;
  while(start<=end){
    int mid=(start+end)/2;
    int RowInd=mid/col;
    int ColInd=mid%col;
    if(arr[RowInd][ColInd]==x){
      return true;
    }
    else if(arr[RowInd][ColInd]<x){
      start=mid+1;
    }
    else{
      end=mid-1;
    }

  }
  return false;
}
int main(){
  int arr[2][2]={1,2,3,4};
  int x=5;
  cout<<SearchMatrix(arr,2,x);
}