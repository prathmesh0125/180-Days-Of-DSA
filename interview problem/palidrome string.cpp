#include<iostream>
using namespace std;

int Ispalindrome(string s ,int start,int end){

  if(start>=end)
  return 1;
  if(s[start]!=s[end]){
return 0;
  }
  return Ispalindrome(s,start+1,end-1);

  
}

int main()
{
  string a="top";
  int start=0;
  int end=a.size()-1;
  cout<<Ispalindrome(a,start,end);
}