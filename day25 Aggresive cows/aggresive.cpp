#include<iostream>
using namespace std;
#include<vector>
int aggresiveCows(int arr[],int n,int k){
    // first ste is sorting
int start=1;
int end=arr[n-1]-arr[0];
int ans=0;
while(start<=end){
int mid=start+(end-start)/2;
int cnt=1,pos=arr[0];
for(int i=1;i<n;i++){
if(pos+mid<=arr[i]){
    cnt++;
    pos=arr[i];
}
}
if(cnt<k){
    end=mid-1;
}
else{
    ans=mid;
    start=mid+1;
}
}
    return ans;


}
int main(){
    // int arr[5]={1,2,4,8,9};
    int arr[5]={1,2,5,7,10};
    int k=3;
    cout<<aggresiveCows(arr,5,k);
}
