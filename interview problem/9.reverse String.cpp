#include<iostream>
using namespace std;
string reverse(string s){
  int start=0;
  int end=s.size()-1;
  while(start<end){
    swap(s[start],s[end]);
    start++;
    end--;
  }
  return s;
}
int main(){
  string s="slow";
  cout<<reverse(s);
}