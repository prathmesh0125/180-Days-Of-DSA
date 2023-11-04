#include<iostream>
using namespace std;
// time complexity O(logn)
int Bitonic(int arr[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end){
       int mid=(start+end)/2;
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
    int arr[9]={1,15,25,45,42,21,17,12,11};
    cout<<Bitonic(arr,9);
}