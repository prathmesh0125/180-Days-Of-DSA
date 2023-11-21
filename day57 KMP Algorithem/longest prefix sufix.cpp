#include<iostream>
using namespace std;
#include<vector>
int LSP(string s){
  vector<int>lps(s.size(),0);
  int pre=0;
  int suf=1;
  while(suf<s.size()){
    if(s[suf]==s[pre]){
      lps[suf]=pre+1;
      suf++;
      pre++;
    }
    else{
      if(pre==0){
        lps[suf]=0;
        suf++;
      }else{
        pre=lps[pre-1];
      }
    }
  }
    return lps[s.size()-1];

}
int main(){
 string s="aaaa";
 cout<<LSP(s);
}