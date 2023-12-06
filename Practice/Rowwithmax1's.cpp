#include<iostream>
using namespace std;
int Max1s(int arr[][4],int n){
  int max=-1;
  int ans=0;
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){
      if(arr[i][j]==1){
        count++;
      }
    }
    if(count>max){
      max=count;
      ans=i;
    }

  }
  return ans;
}
int main(){
  int arr[4][4]={0,0,1,1,0,0,0,0,1,1,1,1,0,0,0,0};
  cout<<Max1s(arr,4);
}