#include <iostream>
#include <vector>
using namespace std;

void permute(vector<int> &arr, vector<vector<int>> &ans, int index)
{
  if (index == arr.size())
  {
    ans.push_back(arr);
    return;
  }
  vector<bool> used(21, 0);
  for (int i = index; i < arr.size(); i++)
  {
    if (used[arr[i]+10] == 0)
    {
      swap(arr[index], arr[i]);
      permute(arr, ans, index + 1);
      swap(arr[index], arr[i]);
      used[arr[i]+10] = 1;
    }
  }
}

int main()
{
  vector<int> arr = {1, 1, 2};
  vector<vector<int>> ans;
  permute(arr, ans, 0);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[0].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}