#include<iostream>
using namespace std;

int main(){
  /*  int marks;
    cout<<"Enter your marks:- "<<endl;
    cin>>marks;
    if(marks>=33 && marks<=100){
        cout<<"Pass";
    }
    else if(marks>=0 && marks<=33){
        cout<<"failed"<<endl;
    }
    else{
        cout<<"Enter valid marks"<<endl; 
    }*/
    int a,b;
    cout<<"Enter the value of a "<<endl; 
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    if(a>b){
        cout<<a<<" is greater than  "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than  "<<a<<endl;

    }
    else{
        cout<<a<<" is equal to  "<<b<<endl;

    }
}