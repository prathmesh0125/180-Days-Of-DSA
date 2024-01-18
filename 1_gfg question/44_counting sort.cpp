#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> &arrr)
{
  for (int i = 0; i < arrr.size(); i++)
  {
    cout << arrr[i] << " ";
  }
  cout << endl;
}
string coutingString(string str)
{
  vector<int> count(26, 0);
  for (char ch : str)
  {
    count[ch - 'a']++;
  }

  print(count);
  int index = 0;
  for (int i = 0; i < 26; i++)
  {
    while (count[i] > 0)
    {
      str[index++] = 'a' + i;
      count[i]--;
    }
  }
  return str;
}
int main()
{
  string a = "geeksforgeeks";
  cout << coutingString(a);
}