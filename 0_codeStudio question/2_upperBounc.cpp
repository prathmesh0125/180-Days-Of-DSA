#include<iostream>
using namespace std;
#include<algorithm>
int LowerBound(int arr[],int n,int x){
    int start=0;
    int end=n-1;
    int ans=n;
    while (start<=end){
      int mid=start+(end-start)/2;
      if(arr[mid]>x){
        ans=mid;
        end=mid-1;
      }
      else{
        start=mid+1;
      }
    }
    return ans;
   
    
}
 int main(){
    int arr[10]={1,2,3,3,5,8,8,10,10,11};
    int x;
    cout<<"enter number "<<endl;
    cin>>x;
    cout<<LowerBound(arr,8,x);
   

 }