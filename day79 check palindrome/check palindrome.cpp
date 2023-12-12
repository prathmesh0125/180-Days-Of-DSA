#include<iostream>
using namespace std;
bool Checkpalindrome(string a,int start,int end){

if(start>=end){
  return 1;
}
if(a[start]!=a[end]){
  return 0;
}

return Checkpalindrome(a,start+1,end-1);

}
int main(){
  string a="abccba";
  int start=0;
  int end=a.size()-1;
  cout<<Checkpalindrome(a,start,end);
}