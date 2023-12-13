#include<iostream>
// non decresing 
using namespace std;
int BinarySearch(int arr[],int start,int end,int x){
  if(start>end){
    return -1;
  }
  int mid=start+(end-start)/2;
  if(arr[mid]==x)
  return mid;
  else if(arr[mid]<x)
  return BinarySearch(arr,mid+1,end,x);
  else 
  return BinarySearch(arr,start,mid-1,x);

}
int main(){
  int arr[5]={1,3,4,5,6};
  int x=5;
  cout<<BinarySearch(arr,0,4,x);
}