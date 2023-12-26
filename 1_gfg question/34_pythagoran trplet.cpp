#include<iostream>
#include<algorithm>
using namespace std;
bool IsPythagoran(int arr[],int n){
  sort(arr,arr+n);
  int total=0;
  for(int i=n-1;i>1;i++){
    int ans=arr[i]*arr[i];
    int j=0,k=i-2;
    while(j<=k){
      total=(arr[j]*arr[j])+(arr[k]*arr[k]);
      if(ans==total){
        return true;
      }
      else if(total>ans){
        k--;
      }
      else{
        j++;
      }
    }
  }
  return false;
}

int main(){
  int arr[5]={3, 2, 4, 6, 5};
  cout<<IsPythagoran(arr,5);
}