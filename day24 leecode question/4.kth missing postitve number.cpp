#include<iostream>
using namespace std;
 int findKthPositive(vector<int>& arr, int k) {
        int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        int ans=arr.size();
        while(start<=end){
           
             if(arr[mid]-mid-1>=k){
                ans=mid;
                end=mid-1;
                
            }
            else{
            start=mid+1;
            }
         mid=start+(end-start)/2;
        }
        return ans+k;
    }