#include<iostream>
using namespace std;
int Search(int arr[][3],int row,int col,int k){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==k){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int x;
    cout<<"Enter element"<<endl;
    cin>>x;
    cout<<Search(arr,4,3,x);
}