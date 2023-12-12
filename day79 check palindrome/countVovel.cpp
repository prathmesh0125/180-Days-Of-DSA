#include<iostream>
using namespace std;
int CountVovel(string a,int index){
if(index==-1){
  return 0;
}
if(a[index]=='a'||a[index]=='e'||a[index]=='i'||a[index]=='o'|| a[index]=='u'){
  return 1+CountVovel(a,index-1);

}
       return  CountVovel(a,index-1);
}

int main(){
  string a="abcde";
  int index=a.size()-1;
  cout<<CountVovel(a,index);
}