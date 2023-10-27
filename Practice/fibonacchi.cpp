#include<iostream>
using namespace std;
int main(){
    int n=15;
    int a=0;
    int b=1;
    int ans=0;
    while(n>ans){
        cout<<ans<<" ";
        a=b;
        b=ans;
        ans=a+b;
    }
}