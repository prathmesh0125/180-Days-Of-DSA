#include<iostream>
using namespace std;
int main(){
    // 1 approach
    // int n;
    // cout<<"Enter n"<<endl;
    // cin>>n;
    // int ans=0;
    // for(int i=1;i<=n;i++){
    //     ans=ans+i;
    // }
    // cout<<"ans is "<<ans<<endl;

    //  2 Approach
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int ans=n*(n+1)/2;
    cout<<ans;
}