#include<iostream>
using namespace std;

int LastIndex(string s){
for(int i=s.length();i>=0;i--){
  if(s[i]=='1'){
    return i;
  }
}
return -1;
}

int main(){
  string s="00001";
  cout<<LastIndex(s);
}