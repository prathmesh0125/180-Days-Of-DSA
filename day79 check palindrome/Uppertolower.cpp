#include<iostream>
using namespace std;
void upperTolower(string &str,int index){
  if(index==-1)
  return ;
  str[index]='a'+str[index]-'A';
  upperTolower(str,index-1);

}
int main(){
  string s="PRATHMESH";
  int index=s.size()-1;
  upperTolower(s,index);
  cout<<s<<" ";
}