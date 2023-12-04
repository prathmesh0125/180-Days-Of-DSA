#include<iostream>
using namespace std;
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}

void GreatestOnright(int arr[],int n){
  int maximum=-1;
  for(int i=n-1;i>=0;i--){
    int temp=maximum;
    if(arr[i]>maximum){
      maximum=arr[i];
    }
    arr[i]=temp;
  }
}
int main(){
  int arr[6]={16,17,4,3,5,2};
  GreatestOnright(arr,6);
  print(arr,6);
}