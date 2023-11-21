#include <iostream>
using namespace std;
int MaxSum(int arr[], int n)
{
  int maxsum = -1;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
    maxsum = max(sum, maxsum);
    if (sum < 0)
    {
      sum = 0;
    }
  }
  return maxsum;
}
int main()
{
  int arr[4] = {4, -6, 2, 8};
  cout << MaxSum(arr, 4);
}