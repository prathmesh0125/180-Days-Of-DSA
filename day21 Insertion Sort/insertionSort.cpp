#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void InsertionSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j>0;j--){
            if(arr[j]<arr[j-1]){
                 swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}
int main(){
    int arr[4]={3,1,4,2};
    InsertionSort(arr,4);
    print(arr,4);
}