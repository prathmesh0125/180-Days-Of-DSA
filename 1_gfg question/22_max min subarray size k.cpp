#include<iostream>
using namespace std;
int Maxmin(int arr[],int n,int k){
  int maxi=INT16_MAX;
  int sum=0;
  for(int i=0;i<n;i++){
    if(i>=k){
      sum-=arr[i-k];
    }
    sum+=arr[i];
    maxi=max(sum,maxi);
    
  }
  return sum;
}
int main(){
  int arr[4]={100,200,300,400};
  int k=2;
  cout<<Maxmin(arr,4,k);
}