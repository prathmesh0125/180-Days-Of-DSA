#include<iostream>
using namespace std;
int MaxSubbarraySum(int arr[],int n){
    int maxSum=-1;
    int sum=0;
    for(int i=0;i<n;i++){
         sum+=arr[i];
        if(sum>maxSum){
           maxSum=sum;
        }
        else if(sum<0){
          sum=0;
        }


    }
    return maxSum;

}

int main(){
    int arr[4]={4,-6,2,8};
    cout<<MaxSubbarraySum(arr,4);
}