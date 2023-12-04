#include<iostream>
using namespace std;
int Relacewith5(int n)
{
  string str=to_string(n);
  for(int i=0;i<str.size();i++){
    if(str[i]=='0')
    {
      str[i]='5';
    }
  }
  int ans=stoi(str);
  return ans;
}
int main(){
  int n=1001;
  cout<<Relacewith5(n);
}