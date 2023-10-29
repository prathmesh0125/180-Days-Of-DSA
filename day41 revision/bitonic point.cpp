#include<iostream>
using namespace std;
// brute force O(n)
// int BitonicPoint(int arr[],int n){
//     int max=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;
// }
// optimal approch O(logn)

int BitonicPoint(int arr[],int n){
    int start=0;
    int end=n-1;
    while (start<end)
    {
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
int main(){
    int arr[5]={1,40,45,50,5};
    cout<<BitonicPoint(arr,5);
}