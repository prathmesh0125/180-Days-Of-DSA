#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Toh(int n, int source, int help, int dest, vector<vector<int>> &ans)
{
  if (n == 1)
  {
    ans.push_back({source, dest});
    return;
  }
  Toh(n - 1, source, dest, help, ans);
  ans.push_back({source, dest});
  Toh(n - 1, help, source, dest, ans);
}

int main()
{
  int n=3;
  vector<vector<int>> ans;
  Toh(n, 1, 2, 3, ans);
  // return ans;
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[0].size(); j++)
    {
      cout << ans[i][j] << " ";

    }
    cout<<endl;
  }
}