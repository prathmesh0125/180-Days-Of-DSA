#include<iostream>
#include<algorithm>
using namespace std;
int maximumElementAfterDecrementingAndRearranging(int arr[],int n){
    sort(arr,arr+n);
    arr[0]=1;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>1){
            arr[i]=arr[i-1]+1;
        }
    }
    return arr[n-1];

}

int main(){
    int arr[5]={2,2,1,2,1};
    // int arr[3]={1,100,1000};
    cout<<maximumElementAfterDecrementingAndRearranging(arr,5);
}