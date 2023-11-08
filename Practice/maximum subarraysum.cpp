#include<iostream>
using namespace std;
int maximumSum(int arr[],int n){
    int ans=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
       ans=max(ans,sum);
        if(sum<0){
            sum=0;
        }
    }   
    return ans;
}
 int main(){
    int arr[4]={4,-6,8,2};
    cout<<maximumSum(arr,4);
 }