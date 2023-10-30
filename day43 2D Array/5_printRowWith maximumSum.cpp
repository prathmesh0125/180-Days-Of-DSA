#include<iostream>
using namespace std;
int MaxSumIndex(int arr[][2],int row,int col){
    int sum=INT16_MIN;
    int index=-1;
    for(int i=0;i<row;i++){
        int total=0;
        for(int j=0;j<col;j++){
            total+=arr[i][j];
            if(total>sum){
                sum=total;
            index=i;
            }
        }
    }
    return index;
}
int main(){
// int arr[5][4]={3,4,7,8,2,8,3,9,5,4,2,2,7,3,0,8,2,8,9,11};
// cout<<MaxSumIndex(arr,5,4);
int arr[2][2]={1,2,3,4};
cout<<MaxSumIndex(arr,2,2);
}