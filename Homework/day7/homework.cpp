#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=6;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=5;i++){
        char ch='A';
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=6;i>=1;i--){
        for(int j=10;j<=15-i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=1;i<=4;i++)
    { 
        char ch='A';
        for(int j=1;j<=4-i+1;j++){
           cout<<ch<<" ";
           ch++;
        }
        cout<<endl;
    }
}