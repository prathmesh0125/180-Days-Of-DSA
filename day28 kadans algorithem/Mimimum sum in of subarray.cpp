#include<iostream>
using namespace std;
int MinimumSum(int arr[],int n){
    int minimum=INT16_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        minimum=min(minimum,sum);
        if(sum>0){
            sum=0;
            cout<<sum;
        }
    }
    return minimum;

}
int main(){
    int arr[5]={2,6,-8,1,-4};
    cout<<MinimumSum(arr,5);
}