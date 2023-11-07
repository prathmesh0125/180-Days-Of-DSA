#include<iostream>
using namespace std;
int main(){
    string s="namant";
    int start=0;
    int end=s.size()-1;
   while(start<end){
    if(s[start]!=s[end]){
        cout<<"not a palindrome"<<endl;
        return 0;

    }
    start++;
    end--;
   }
   cout<<"is palidrome"<<endl;

}