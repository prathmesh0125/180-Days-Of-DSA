#include<iostream>
using namespace std;
void print(string s,int size){
for(int i=0;i<size;i++){
    cout<<s[i]<<" ";
}
}
void Reverse(string &s,int size){
int start=0;
int end=size-1;
while(start<end){
    swap(s[start++],s[end--]);
}
}

int main(){
    string s="prathmesh";
    Reverse(s,s.size());
    print(s,s.size());
}