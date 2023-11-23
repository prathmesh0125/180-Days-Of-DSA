#include<iostream>
using namespace std;
int CountZeros(int arr[][3]){
  int count=0;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(arr[i][j]==0){
        count++;
      }
    }
  }
  return count;
}
int main(){
  int arr[3][3]={0,1,2,0,1,3,0,0,0};
  cout<<CountZeros(arr);
}