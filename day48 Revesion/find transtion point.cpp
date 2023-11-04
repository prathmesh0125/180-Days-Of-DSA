#include<iostream>
using namespace std;
  int transitionPoint(int arr[], int n) {
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]==1){
                ans=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return ans;
    }
int main(){
    int arr[5]={0,0,0,1,1};
       cout<<transitionPoint(arr,5);
}