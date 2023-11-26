#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>v){
  for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
  }
}
void Pattern(int n){
  vector<int>v;
  v.push_back(n);
  while(n>0){
    n=n-5;
    v.push_back(n);
    
  }
  int s=v.size();
  for(int i=s-2;i>=0;i--){
    v.push_back(v[i]);
  }

  print(v);
}
int main(){
  int n=16;
  Pattern(n);
  return 0;
}