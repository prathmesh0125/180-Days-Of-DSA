#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void print(vector<int>&temp)
{
  for(int i=0;i<temp.size();i++){
    cout<<temp[i]<<" ";
  }
}
void doub(vector<int>&temp){
  for (int i = 0; i < temp.size(); i++)
  {
    temp[i]=temp[i]*2;
  }
  
}
int main(){
  // int n=10;
  // int &temp=n;
  // cout<<temp;
  // temp++;
  // cout<<n;
  // cout<<temp;
  // cout<<endl;
  // cout<<&temp<<endl;
  // cout<<&n<<endl;
  vector<int>v(10,1);
  doub(v);
  print(v);


}