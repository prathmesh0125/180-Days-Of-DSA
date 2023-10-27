#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int power;
    cout<<"enter power"<<endl;
    cin>>power;
    int ans=n;

    for(int i=1;i<power;i++){
        ans=ans*n;
    }
    cout<<ans;
    
}