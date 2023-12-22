#include <iostream>
#include <vector>
#include <algorithm>
// leetcode 46 permutaion
using namespace std;
void print(vector<vector<int>> &ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[0].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}
void permuTation(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visted)
{
  if (visted.size() == temp.size())
  {
    ans.push_back(temp);
    return;
  }
  for (int i = 0; i < visted.size(); i++)
  {
    if (visted[i] == 0)
    {
      visted[i] = 1;
      temp.push_back(arr[i]);
      permuTation(arr, ans, temp, visted);
      visted[i] = 0;
      temp.pop_back();
    }
  }
}
// without using temp and visited space

void permuTation1(vector<int> &arr, vector<vector<int>> &ans, int index)
{
  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }
  for (int i = index; i < arr.size(); i++)
  {
    swap(arr[i], arr[index]);
    permuTation1(arr, ans, index + 1);
    swap(arr[i], arr[index]);
  }
}
int main()
{
  vector<int> arr = {1, 2, 3};
  vector<vector<int>> ans;
  // vector<int>temp;
  // vector<bool>visted(3,0);
  // permuTation(arr,ans,temp,visted);
  permuTation1(arr, ans, 0);
  print(ans);
}