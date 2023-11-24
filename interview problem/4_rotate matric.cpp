#include<iostream>
using namespace std;
void Rotate(int arr[][3],int n){
  // transopose marix
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      swap(arr[i][j],arr[j][i]);
    }
  }
  // reverse row wise matrix
  for(int i=0;i<n;i++){
    int start=0;
    int end=n-1;
    while(start<end){
      swap(arr[i][start++],arr[i][end--]);
    }
  }
}
int main(){
  int arr[3][3]={1,2,3,4,5,6,7,8,9};
  Rotate(arr,3);
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
  }
}