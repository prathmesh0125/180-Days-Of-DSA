#include<iostream>
using namespace std;
void Lowertoupper(string &str,int index){
  if(index==-1)
  return ;
  str[index]='A'+str[index]-'a';
  Lowertoupper(str,index-1);

}
int main(){
  string s="prathmesh";
  int index=s.size()-1;
  Lowertoupper(s,index);
  cout<<s<<" ";
}