#include<iostream>
using namespace std;

void printarr(int n,int arr[],int i){
if(i<0){
  return;
}
printarr(n,arr,i-1);
cout<<arr[i]<<" ";
}
int main(){
  int arr[4]={1,2,3,4};
  printarr(4,arr,3);
}