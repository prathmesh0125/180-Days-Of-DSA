#include<iostream>
using namespace std;
int main(){
  int arr[5]={1,2,3,4,5};
  int *ptr=arr;
  for(int i=0;i<5;i++){
    cout<<*(ptr)<<" ";
    ptr++;
  }
  int *p=arr+4;
  for(int i=0;i<5;i++){
    cout<<*(p)<<" ";
    p--;
  }
}