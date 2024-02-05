#include <iostream>
#include <unordered_map>
using namespace std;
int firstUnique(string s)
{
  unordered_map<char, int> map;
  for (auto a : s)
    map[a]++;
  for (int i = 0; i < s.size(); i++)
  {
    if (map[s[i]] == 1)
      return i;
  }
  return -1;
}

int main()
{
  string s = "leetcode";
  cout << firstUnique(s);
}
