#include<iostream>
using namespace std;
int MissingNumber(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
    }
    int ans2=n*(n+1)/2;

    int missingnum=ans2-ans;
    return missingnum;
}
int main(){
    int arr[7]={1,2,3,5,6,7};
    cout<<MissingNumber(arr,7);
}