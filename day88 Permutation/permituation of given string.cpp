#include <iostream>
#include <vector>
#include <set>
using namespace std;

void print(vector<string>&ans){
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}

void permute(string &str, vector<string> &ans, int index)
{
  if (index == str.size())
  {
    ans.push_back(str);
    return;
  }

  set<char> used; // To track used characters at each level

  for (int i = index; i < str.size(); i++)
  {
    // Skip duplicates
    if (used.count(str[i]) > 0)
    {
      continue;
    }
    swap(str[i], str[index]);
    permute(str, ans, index + 1);
    swap(str[i], str[index]);

    used.insert(str[i]); // Mark the character as used
  }
}

int main()
{
  string s = "Abc";
  vector<string> ans;
  permute(s, ans, 0);
  print(ans);
}