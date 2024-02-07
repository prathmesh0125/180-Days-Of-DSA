#include <iostream>
#include <vector>
#include <stack>
using namespace std;
void print(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
}
vector<int> smallestonLeftside(vector<int> &arr)
{
  vector<int> v(arr.size(), -1);
  stack<int> st;
  for (int i = arr.size() - 1; i >= 0; i--)
  {
    while (!st.empty() && arr[i] < arr[st.top()])
    {
      v[st.top()] = arr[i];
      st.pop();
    }
    st.push(i);
  }
  return v;
}
int main()
{
  vector<int> v = {1, 6, 2};
  vector<int> ans = smallestonLeftside(v);
  print(ans);
  // for(int num:ans){
  //   cout<<num<<endl;
  // }
}