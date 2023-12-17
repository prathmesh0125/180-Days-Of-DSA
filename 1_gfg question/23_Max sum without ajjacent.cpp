#include<iostream>
using namespace std;
// witout two sequence adjascent
int Maxsum(int arr[],int n)
{
  int prev=0,curr=arr[0],next=0;
  for(int i=1;i<n;i++){
    int next=max(curr,prev+arr[i]);
    prev=curr;
    curr=next;
  }
  return curr;
}
  int main(){
  int arr[6]={5,5,10,100,10,5};
  cout<<Maxsum(arr,6);
}