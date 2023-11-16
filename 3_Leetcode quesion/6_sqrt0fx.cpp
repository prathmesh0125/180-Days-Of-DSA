#include<iostream>
using namespace std;
int Sqrt(int n){
    int start=1;
    int end=n;
    int ans=0;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(mid*mid==n){
          return mid;
        }
        else if(mid*mid<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter number "<<endl;
    cin>>n;
    cout<<Sqrt(n);
}