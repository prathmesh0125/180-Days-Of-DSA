#include<iostream>
using namespace std;
int InsertPostion(int arr[],int n,int k){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=n;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
        
     mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[7]={1,2,4,5,6,8,9};
    cout<<"coorect postion "<<InsertPostion(arr,7,10);
}