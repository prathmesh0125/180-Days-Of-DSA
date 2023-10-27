#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void MoveZeros(int arr[],int n){
int i=0;
int j=0;
while(i<n && j<n){
if(arr[j]==0){
    swap(arr[i++],arr[j++]);
}
else{
    j++;
}
}
}
int main(){
    int arr[5]={1,0,3,0,4};
    MoveZeros(arr,5);
    print(arr,5);
}