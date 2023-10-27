#include<iostream>
using namespace std;
int Mimimum(int arr[],int n){
    int ans=arr[0];
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]>=arr[0]){
           start=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arr[7]={4,5,6,7,8,1,2};
    cout<<Mimimum(arr,7);
}