#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    long long ans=1;
    for(int i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    cout<<ans;
}