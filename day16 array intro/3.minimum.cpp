#include<iostream>
using namespace std;
int findMin(int arr[],int n){
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    return ans;
}int findMAx(int arr[],int n){
    int ans=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>ans){
            ans=arr[i];
        }
    }
    return ans;
}
int main(){
    int arr[5]={4,6,15,2,8};
    cout<<findMin(arr,5)<<endl;
    cout<<findMAx(arr,5);
}