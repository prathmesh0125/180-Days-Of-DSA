#include<iostream>
using namespace std;
void print(int arr[]){
for(int i=0;i<10;i++){
    cout<<arr[i];
}
}
void input(int arr[]){
for(int i=0;i<10;i++){
    cin>>arr[i];
}
}
int main(){
    int arr[10];
    int a[]={1,2,3,4,5};
    for(int i=0;i<5;i++){
    cout<<a[i];
}
    // input(arr);
    // print(arr);
}