#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int RotateOne(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=last;
}

int main(){
 int arr[5]={1,2,3,4,5};
    // int d=5;
    RotateOne(arr,5);
    print(arr,5);
}