// 28. Find the Index of the First Occurrence in a String
#include<iostream>
#include<vector>
using namespace std;
// int MatchingIndex(string heystick,string needle){
//   int n=heystick.size();
//   int m=needle.size();
//   for(int i=0;i<=n-m;i++){
//     int first=i;
//     int second=0;
//     while(second<m){
//       if(heystick[first]!=needle[second]){
//         break;
//       }
//       else{
//         first++;
//         second++;
//       }
//     }
//     if(second==m){
//       return first-second;
//     }
//   }
//   return -1;
// }

void lpsfind(vector<int>&lps,string needle){
  int pre=0;
  int suf=1;
  while(suf<needle.size()){
    if(needle[pre]==needle[suf]){
      lps[suf]=pre+1;
      pre++,suf++;
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
int MatchingIndex(string haystick,string needle){
  vector<int>lps(needle.size(),0);
  lpsfind(lps,needle);
  int first=0;
  int second=0;
  while(second<needle.size() && first <haystick.size()){
    if(haystick[first]==needle[second]){
      first++,second++;
    }
    else{
      if(second==0){
        first++;
      }
      else{
        second=lps[second-1];
      }
    }
  }
  if(second==needle.size()){
    return first-second;
  }
  else{
    return -1;
  }
}
int main(){
  string s1="abacdabad";
  string s2="abad";
  cout<<MatchingIndex(s1,s2);
}