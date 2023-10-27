#include<iostream>
using namespace std;
int main(){
    int arr[9]={3,2,1,4,5,7,0,8,9};
    int smallest=arr[0];
    int index=0;
    for(int i=0;i<9;i++){
        if(arr[i]<smallest){
            index=i;
        }
    }
    cout<<index;
}