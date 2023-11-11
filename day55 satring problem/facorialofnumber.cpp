#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// integer overflow problem occur
// int Factorial(int n){
//     int facorail=1;
//     for(int i= 1;i<=n;i++){
//         facorail=facorail*i;
//     } 
//     return facorail;
// }
void print(vector<int>ans){
    for(int i=0;i<ans.size();i++){
   cout<<ans[i];
    }
}
vector<int> Factorial(int &n){
vector<int>ans(1,1);
while (n>1)
{
int size=ans.size();
int cary=0,res=0;

for(int i=0;i<size;i++){
res=ans[i]*n+cary;
cary=res/10;
ans[i]=res%10;
}
while (cary)
{
ans.push_back(cary%10);
cary/=10;
}
n--;
}
reverse(ans.begin(),ans.end());
print(ans);
// return ans;
}
int main(){
    int n=5;
    Factorial(n);
}