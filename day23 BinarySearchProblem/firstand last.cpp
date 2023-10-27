#include<iostream>
using namespace std;
int FirstOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]==key){
          ans=mid;
          end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        if(arr[mid]==key){
          ans=mid;
           start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int arrr[6]={7,7,7,7,7,7};
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<"first occ:-" <<FirstOcc(arrr,6,key);
    cout<<endl;
    cout<<"Last occurance:- "<<lastOcc(arrr,6,key)<<endl;
    cout<<"Toal oceurance:- "<<(lastOcc(arrr,6,key)-FirstOcc(arrr,6,key))+1;
}