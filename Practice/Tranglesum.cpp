#include<iostream>
using namespace std;

void TrangelSum(int arr[][3],int n){
    int lowerSum=0;
    int upperSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
              upperSum+=arr[i][j];
            }
            if(j<=i){
                lowerSum+=arr[i][j];
            }

        }
    }
    cout<<"lowerSum "<< lowerSum<<endl;
    cout<<"upperSum "<< upperSum<<endl;
}
int main(){
    int arr[3][3]={6, 5, 4,1, 2, 5,7, 9, 7};
    TrangelSum(arr,3);
}