#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int start,int end){
while(start<end){
    swap(arr[start++],arr[end--]);
}
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    reverse(arr,0,7-k-1);
    reverse(arr,7-k,7-1);
    reverse(arr,0,7-1);
    print(arr,7);

    
}