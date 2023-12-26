#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
// this solution take O(n) space beacuse of extra array creation
// void Rearrage(int arr[],int n){
//   int arr1[n];
//   copy(arr,arr+n,arr1);
//   for(int i=0;i<n;i++){
//     arr[i]=arr1[arr1[i]];
//   }
// }

void Rearrage(int arr[],int n){
  for(int i=0;i<n;i++){
    arr[i]=arr[i]+((arr[arr[i]]%n)*n);
  }
  for(int i=0;i<n;i++){
    arr[i]=arr[i]/n;
  }
}
int main(){
  int arr[4]={3,2,1,0};
  Rearrage(arr,4);
  print(arr,4);
}