#include <iostream>
#include <stack>
using namespace std;
int check(string str)
{
  stack<char> s;
  int count=0;
  for (int i = 0; i < str.size(); i++)
  {
    // opening
    if (str[i] == '(')
    {
      s.push(str[i]);
    }
    // closing
    else
    {
      if (s.empty())
      {
        count++;
      }
      else
      {
        s.pop();
      }
    }
  }
  return count+ s.size();
}

int main()
{
  string str = "(((((()))";
  cout << check(str) << endl;
  return 0;
} 