#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int removeConsecutiveSame(vector<string> v)
{
  stack<string> s;
  for (int i = 0; i < v.size(); i++)
  {
    if (s.empty())
    {
      s.push(v[i]);
    }
    else if (v[i] == s.top())
    {
      s.pop();
    }
    else
    {
      s.push(v[i]);
    }
  }
  return s.size();
}

int main()
{
  vector<string>v={"ab","ad","ad","ak","ac"};
  cout<<removeConsecutiveSame(v);

}