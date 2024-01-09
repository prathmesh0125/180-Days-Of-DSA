#include<iostream>
using namespace std;
string reverse(string str){
  int start=0;
  int end=str.size()-1;
  while(start<=end){
    swap(str[start++],str[end--]);
  }
  return str;
}

int main(){
  string str="geeks";
  cout<<reverse(str);
}