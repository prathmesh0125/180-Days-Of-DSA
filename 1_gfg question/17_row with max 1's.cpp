#include <iostream>
using namespace std;
int RowWithMax1s(int arr[][4], int n, int m)
{
  int max = 0;
  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] == 1)
      {
        count++;
      }
    }
    if (count > max)
    {
      max = count;
      ans = i;
    }
  }
  return ans;
}

int main()
{
  int arr[4][4] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
  cout << RowWithMax1s(arr, 4, 4);
}