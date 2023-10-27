#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
        }
            i++;
    
    }
}