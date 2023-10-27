#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter number"<<endl;
    cin>>num;
    for(int i=0;i<num;i++){
        if(i%4==0){
            cout<<i<<" ";
        }
    }
}