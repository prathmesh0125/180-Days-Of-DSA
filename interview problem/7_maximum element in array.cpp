#include<iostream>
using namespace std;
int Maximum(int arr[],int n){
  int max=INT16_MIN;
  for(int i=0;i<n;i++){
    if(max<=arr[i]){
      max=arr[i];
    }
  }
  return max;
}
int main(){
  int arr[7]={3,2,1,4,5,6,7};
  cout<<Maximum(arr,7);
}