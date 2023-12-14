#include<iostream>
using namespace std;
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void rotate(int arr[],int i){
if(i==0)
return ;
swap(arr[i],arr[i-1]);
rotate(arr,i-1);
}
int main(){
  int arr[5]={1,2,3,4,5};
  rotate(arr,4);
  print(arr,5);
}