#include<iostream>
#include<vector>
using namespace std;
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void merge(int arr[],int start,int mid,int end){
  vector<int>temp(end-start+1);
  int left=start;
  int right=mid+1;
  int index=0;
  while(left<=mid && right<=end){
    if(arr[left]<=arr[right]){
      temp[index++]=arr[left++];
    }
    else{
      temp[index++]=arr[right++];
    }
  }

  // left side remaining element
  while(left<=mid){
      temp[index++]=arr[left++];
  }
  // right side remaining element
  while(right<=end){
      temp[index++]=arr[right++];
  }
  index=0;
  while(start<=end){
    arr[start++]=temp[index++];
  }
}
void mergesort(int arr[],int start,int end){
  if(start==end){
    return;
  }
  int mid=start+(end-start)/2;
  mergesort(arr,start,mid);
  mergesort(arr,mid+1,end);
  merge(arr,start,mid,end);
}
int main(){
  int arr[10]={6,3,1,2,8,9,10,7,3,10};
  print(arr,10);
  cout<<endl;
  mergesort(arr,0,9);
  print(arr,10);

}