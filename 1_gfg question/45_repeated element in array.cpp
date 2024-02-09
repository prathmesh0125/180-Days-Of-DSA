#include <iostream>
#include<vector>
using namespace std;
vector<int> TworepeatedElement(vector<int>&arr,int n){
  vector<int>ans(2);
  vector<bool>check(n+2,false);
  int index=0;
  for(int i=0;i<n+2;i++){
    if(check[arr[i]]){
      ans[index++]=arr[i];
    }
    else{
      check[arr[i]]=true;
    }
  }
  return ans;
}
int main()
{
 vector<int>arr= {1, 2, 1, 3, 4, 3};
vector<int>ans=TworepeatedElement(arr,4);
for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<" ";
}
}