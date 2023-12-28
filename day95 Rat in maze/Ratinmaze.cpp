#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int row[4] = {-1, 1, 0, 0};
int col[4] = {0, 0, -1, 1};
string dir = "UDLR";

void print(vector<string>ans)
{
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i];
  // cout << endl;
  }
}

bool valid(int i, int j, int n)
{
  return i >= 0 && j >= 0 && i < n && j < n;
}

void total(vector<vector<int>> &matrix, int i, int j, int n, string &path, vector<string> &ans, vector<vector<bool>> &visited)
{
  if (i == n - 1 && j == n - 1)
  {
    ans.push_back(path);
    return;
  }

  visited[i][j] = true;

  for (int k = 0; k < 4; k++)
  {
    if (valid(i + row[k], j + col[k], n) && matrix[i + row[k]][j + col[k]] && !visited[i + row[k]][j + col[k]])
    {
      path.push_back(dir[k]);
      total(matrix, i + row[k], j + col[k], n, path, ans, visited);
      path.pop_back();
    }
  }

  visited[i][j] = false;
}

int main()
{
  vector<vector<int>> matrix = {{1, 0, 0, 0},
                                {1, 1, 0, 1},
                                {1, 1, 0, 0},
                                {0, 1, 1, 1}};

  int n = matrix.size();
  vector<vector<bool>> visited(n, vector<bool>(n, false));
  vector<string> ans;
  string path;

  if (matrix[0][0] == 0 || matrix[n - 1][n - 1] == 0)
  {
    return 0;
  }

  total(matrix, 0, 0, n, path, ans, visited);
  print(ans); // Assuming you want to print the first path found
  //   for (int i = 0; i < ans.size(); i++)
  // {
  //   cout << ans[i];
  //   cout<<endl;
  // }
  // cout << endl;
}
