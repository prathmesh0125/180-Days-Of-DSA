#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>& ans){
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}
void AlternativeSort(vector<int>& ans)
{
  int n=ans.size();
  sort(ans.begin(),ans.end());
  vector<int>res;
int i=0;
int j=n-1;
while(i<j)
{
res.push_back(ans[j]);
res.push_back(ans[i]);
i++,j--;
}
if(n%2!=0){
res.push_back(ans[i]);
  
}
int k=0;
for(auto it:res){
ans[k]=it;
k++;
}
}
int main(){
vector<int>ans={1, 6, 9, 4, 3, 7, 8, 2};
AlternativeSort(ans);
print(ans);
}