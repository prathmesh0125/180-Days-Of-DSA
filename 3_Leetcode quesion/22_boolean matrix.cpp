#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int arr[][3], int r, int c)
{
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

void matrix(int arr[][3], int r, int c)
{
  vector<int> row(r, 0);
  vector<int> col(c, 0);
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (arr[i][j] == 1)
      {
        row[i] = 1;
        col[j] = 1;
      }
    }
  }

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (row[i] == 1 || col[j] == 1)
      {
        arr[i][j] = 1;
      }
    }
  }
}

int main()
{
  int arr[4][3] = {1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0};
  // int arr[2][2] = {1, 0, 0, 0};
  matrix(arr, 4, 3);
  print(arr, 4, 3);
}