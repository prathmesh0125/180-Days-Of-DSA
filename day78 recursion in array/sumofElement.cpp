#include <iostream>
using namespace std;
int sum1(int arr[], int index, int n)
{
  if (index == n)
  {
    return 0;
  }
  return arr[index] + sum1(arr, index + 1, n);
}
int sum(int arr[], int index)
{
  if (index < 0)
  {
    return 0;
  }
  return arr[index] + sum(arr, index - 1);
}
int main()
{
  int arr[5] = {3, 4, 5, 8, 2};
  cout << sum1(arr, 0, 5)<<endl;
  cout << sum(arr, 4);
}