#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number"<<endl;
    cin>>num;

    int ans=0;
    int rem=0;
    int mul=1;
    while(num>0){
        rem=num%2;
        ans=rem*mul+ans;
        num/=2;
        mul*=10;
    }
    cout<<ans;
}