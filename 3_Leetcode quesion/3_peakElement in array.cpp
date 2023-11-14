#include <iostream>
using namespace std;
int PeakElement(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return arr[start];
}
int main()
{
    int arr[4] = {0,10,5,2};
    cout<<PeakElement(arr,4);
}