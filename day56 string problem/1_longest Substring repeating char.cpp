#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int Substring(string s)
{
  vector<bool> count(256, 0);
  int first = 0;
  int second = 0;
  int len = 0;
  while (second < s.size())
  {
    while (count[s[second]])
    {
      count[s[first]] = 0;
      first++;
    }
    count[s[second]] = 1;
    len = max(len, second - first + 1);
    second++;
  }
  return len;
}
int main()
{
  string s = "abcabcbb";
  cout << Substring(s);
}