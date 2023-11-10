#include<iostream>
using namespace  std;
#include<algorithm>
string add(string num1,string num2){
    string ans;
    int index1=num1.size()-1;
    int index2=num2.size()-1;
    int carry=0;
    int sum=0;
    while(index2>=0){
        sum=(num1[index1]-'0')+(num2[index2]-'0')+carry;
        carry=sum/10;
        char c='0'+sum%10;
        ans+=c;
        index1--;
        index2--;
    }
    while(index1>=0){
       sum=num1[index1]-'0'+carry;
       carry=sum/10;
       char c='0'+sum%10;
       ans+=c;;
       index1--;
    }
    if(carry){
        ans+='1';
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
int main(){
    string num1="200";
    string num2="21";
   cout<<add(num1,num2);
}