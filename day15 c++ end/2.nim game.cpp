
#include<iostream>
using namespace std;

void nim(int n){
    if(n%4==0){
        cout<<"you loose";
    }
    else{
        cout<<"you win"<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    nim(n);
}