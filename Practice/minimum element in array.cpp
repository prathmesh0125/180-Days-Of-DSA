#include<iostream>
using namespace std;
int MinmumElement(int arr[],int n)
{
    int start=0;
    int end=n-1;
    int ans=0;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            ans=arr[mid];
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int a[7]={4,5,6,7,8,1,2};
    cout<<MinmumElement(a,7);
}