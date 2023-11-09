#include<iostream>
using namespace std;
string Defanging(string s,int n){
    int index=0;
    string ans;
    while(index<n){
        if(s[index]=='.'){
            ans+="[.]";

        }
        else{
            ans+=s[index];
        }
        index++;
    }
    return ans;
}
int main(){
    string s="1.1.1.1";
    cout<<Defanging(s,s.size());
}