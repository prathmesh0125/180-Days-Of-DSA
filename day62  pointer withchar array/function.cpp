#include<iostream>
using namespace std;
// int incr(int *n){
//   *n=*n+1;
//   *n+=1;
// }
// int main(){
//   int num=10;
//   int temp=num;
//   incr(&num);
//   cout<<num;

// }

// 2
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

void dob(int *arr,int n){
  for(int i=0;i<n;i++){
     arr[i]=arr[i]*2;
  }
}

int main(){
  int arr[5]={1,2,3,4,5};
  dob(arr,5);
  print(arr,5);
}