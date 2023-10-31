#include<iostream>
using namespace std;
void SprialMatrix(int arr[][3],int row,int col){
    int top=0;
    int right=col-1;
    int bottom=row-1;
    int left=0;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
               cout<<arr[top][i]<<" ";
               
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;

        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
        }
        bottom--;
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                cout<<arr[i][left]<<" ";
            }
        }
        left++;
    }

}

 int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    SprialMatrix(arr,3,3);
 }