#include <iostream>
using namespace std;

int Floor(int arr[], int n, int x)
{
  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < x)
    {
      ans = i;
    }
    else
    {
      break;
    }
  }
  return ans;
}
int main()
{
  int arr[7] = {1, 2, 8, 10, 11, 12, 19};
  int x = 5;
  cout << Floor(arr, 7, x);
}