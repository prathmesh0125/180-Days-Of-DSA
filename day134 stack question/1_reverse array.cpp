#include <iostream>
#include <stack>
using namespace std;
string reverseString(string s)
{
  stack<char> st;
  for (int i = 0; i < s.size(); i++)
  {
    st.push(s[i]);
  }
  int i = 0;
  while (!st.empty())
  {
    s[i] = st.top();
    i++;
    st.pop();
  }
  return s;
}
int main()
{
  string s = "hello";
  cout << reverseString(s);
}