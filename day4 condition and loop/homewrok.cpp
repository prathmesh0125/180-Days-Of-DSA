#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age "<<endl;
    cin>>age;
    if(age>0 && age<18){
        cout<<"your are tenager"<<endl;

    }
    else if(age>=18 && age<110){
        cout<<"your are adult"<<endl;
    }
    else{
        cout<<"Enter valid Age"<<endl;
    }
}