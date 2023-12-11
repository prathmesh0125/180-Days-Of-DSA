#include<iostream>
using namespace std;
int maxElement(int arr[],int index,int n){
  if(index==n-1){
    return arr[index];
  }
  return max(arr[index],maxElement(arr,index+1,n));
}
int main(){
  int arr[5]={7,2,9,1,6};
  cout<<maxElement(arr,0,5);
}