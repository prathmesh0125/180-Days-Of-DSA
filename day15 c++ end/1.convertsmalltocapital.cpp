#include<iostream>
using namespace std;
char conVert(char ch){
    char ans=ch-'a'+'A';
    return ans;
}
int main(){
    char ch;
    cout<<"Enter character"<<endl;
    cin>>ch;
    cout<<conVert(ch);
}