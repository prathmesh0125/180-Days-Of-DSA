#include<iostream>
using namespace std;
int Miniuminnumsay(int nums[],int n){
          int start=0;
    int end=n-1;
    int ans=nums[0];
    while(start<=end){
        int mid=(start+end)/2;
        if(nums[mid]>=nums[0]){
            start=mid+1;
        }
        else{
            ans=nums[mid];
            end=mid-1;
        }
    }
    return ans;
}
 int main(){
    int nums[5]={3,4,5,1,2};
    cout<<Miniuminnumsay(nums,5);
 }