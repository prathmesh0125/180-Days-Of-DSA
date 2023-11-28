#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findlps(vector<int>&lps,string s){
  int pre=0;
  int suf=1;
  while(suf<s.size()){
    if(s[pre]==s[suf]){
      lps[suf]=pre+1;
      pre++;
      suf++;
    }
    else{
      if(pre==0){
        lps[suf]=0;
        suf++;
      }
      else{
        pre=lps[pre-1];
      }
    }
  }
}

int minChar(string s){
string rev=s;
reverse(rev.begin(),rev.end());
int size=s.size();
s+='$';
s+=rev;
int size2=s.size();
vector<int>lps(size2,0);
findlps(lps,s);

return size-lps[size2-1];
  
}
int main()
{
  string s = "roorsp";
  cout << minChar(s);
}