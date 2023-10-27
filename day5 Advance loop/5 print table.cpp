#include<iostream>
using namespace std;
int main(){
    // 1 approach
    // int number;
    // cout<<"Enter number"<<endl;
    // cin>>number;
    // for(int i=1;i<=10;i++){
    //     cout<<number<<"*"<<i<<"="<<number*i<<endl;
    // }
    // 2 approach
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
        cout<<"Table"<<endl;
    for(int i=num;i<=num*10;i+=num){
        cout<<i<<endl;
    }



}