#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter age "<<endl;
    cin>>age;
    if(age<0 || age>=100){
        cout<<"enter valid age"<<endl;
    }
   else if(age<=12 || age >=65){
        cout<<"you are eligible for offer";
    }
    else{
        cout<<"your are not eligible"<<endl;
    }
}