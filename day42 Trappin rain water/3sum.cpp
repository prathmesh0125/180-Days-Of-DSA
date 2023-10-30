#include<iostream>
using namespace std;
// brute force approach
// int sum(int arr[],int n,int x){
//     for(int i=0;i<n-2;i++){
//         for(int j=i+1;j<n-1;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==x){
//                     return 1;
//                 }
//             }
//         }
//     }
//     return 0;
// }
// optimal approach
int sum(int arr[],int n,int x){
    for(int i=0;i<n-2;i++){
      int ans=x-arr[i];
      int start=i+1;
      int end=n-1;
      while(start<=end){
        if(arr[start]+arr[end]==ans){
            return 1;
        }
        else if(arr[start]+arr[end]>ans){
            end--;
        }
        else{
            start++;
        }
      }
    }
    return 0;
}

int main(){
    int arr[6]={1,4,45,6,10,8};
    int x=13;
    cout<<sum(arr,6,x);
}