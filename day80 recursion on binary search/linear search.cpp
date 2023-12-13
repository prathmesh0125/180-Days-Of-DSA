#include<iostream>
using namespace std;
bool LinearSearch(int arr[],int x,int index)
{
  if(index==-1)
  return -1;
  if(arr[index]==x){
    return 1;
  }
  return LinearSearch(arr,x,index-1);
}
int main(){
  int arr[5]={2,3,2,1,4};
  int x=5;
  cout<<LinearSearch(arr,x,5);
}