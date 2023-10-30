#include<iostream>
using namespace std;

void princol(int arr[][3],int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
    }
}
int main(){
    int arr[4][3];
    cout<<"enter values"<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
// row wise print 
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    cout<<endl;

    // col wise prin by using function
    princol(arr,4,3);
}