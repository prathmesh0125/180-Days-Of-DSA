#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool find4Sum(vector<int>&arr,int n,int x){
  
 sort(arr.begin(),arr.end());

//  or use oter sorting method
  for(int i=0;i<n-3;i++){
    int ans=x-arr[i];
    for(int j=i+1;j<n-2;j++){
        int ans2=ans-arr[j];
        int start=j+1;
        int end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans2){
                return 1;
            }
            else if(arr[start]+arr[end]<ans2){
                start++;
            }
            else{
                end--;
            }

        }
    }
    return 0;
  }
}
int main(){
    vector<int>arr={1,5,1,0,6,0};
    int x=7;
    cout<<find4Sum(arr,5,x);
}