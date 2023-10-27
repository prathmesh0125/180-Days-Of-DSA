#include<iostream>
using namespace std;

 void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
 }
 void reverse(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){
        // swap(arr[low],arr[high]);
        // or
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
 }
int main(){
    int arr[7]={6,11,7,4,8,9,7};
    // int arr[6]={6,11,7,4,8,9};
    reverse(arr,7);
    print(arr,7);
}