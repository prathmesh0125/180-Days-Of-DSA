#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
 for(int i=0;i<arr.size();i++){
  cout<<arr[i]<<" ";
 } 
}
void removeDuplicate(vector<int>arr){
vector<int>ans;
int freq[100]={0};
for(int i=0;i<arr.size();i++){
freq[arr[i]]++;
if(freq[arr[i]]==1){
  ans.push_back(arr[i]);
}
}
print(ans);
}
int main(){
  vector<int>arr={2,2,3,3,6};
  removeDuplicate(arr);
  
}