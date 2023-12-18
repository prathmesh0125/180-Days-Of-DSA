#include<iostream>
using namespace std;
int findMinimum(int arr[],int start,int end){
while(start<end){
  int mid=start+(end-start)/2;
  if(arr[start]<arr[end]){

  break;
  }
  else if(arr[mid]>=arr[0]){

  start=mid+1;
  }
  else
  {
  end;
  }

}
return arr[start];

}
int main(){
  int arr[7]={4,5,6,7,0,1,2};
  cout<<findMinimum(arr,0,6);

}