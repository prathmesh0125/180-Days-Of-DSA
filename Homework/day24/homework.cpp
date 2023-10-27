#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<<"Enter array element"<<endl;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,5);
    print(arr,5);
    
}