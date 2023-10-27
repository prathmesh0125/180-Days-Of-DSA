#include<iostream>
using namespace std;
// value pass as a referance 
void swap1(int &a,int &b){
    int c;
    c=b;
    b=a;
    a=c;
}
int main(){
    int a=10;
    int b=20;
    swap1(a,b);
    cout<<a<<b;

}