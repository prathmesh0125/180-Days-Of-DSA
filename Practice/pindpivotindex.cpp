#include<iostream>
using namespace std;
int findPivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int index=0;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
           start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[8]={1,4,5,6,7,11,2,1};
    cout<<findPivot(arr,8);
}