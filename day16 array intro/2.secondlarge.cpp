#include<iostream>
using namespace std;

int secondLarge(int arr[],int n){
    int large=INT16_MIN;
    int secLar=0;
    for(int i=1;i<n;i++){
        if(arr[i]>large){
            secLar=large;
            large=arr[i];
        }
    else if(arr[i]<large && arr[i]>secLar){
        secLar=arr[i];
    }
    }
    return secLar;
}
int main(){
    // int arr[6]={2,1,3,4,5,6};
    int arr[6] = {1,2,4,7,7,5};
    cout<<secondLarge(arr,6);
}