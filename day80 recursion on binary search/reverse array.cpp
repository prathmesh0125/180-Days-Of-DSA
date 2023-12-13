#include <iostream>
using namespace std;

void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}
void reverseArr(int arr[], int start, int end)
{
  if (start > end)
  {
    return;
  }
  swap(arr[start], arr[end]);
  reverseArr(arr, start + 1, end - 1);
}
int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  reverseArr(arr, 0, 5);
  print(arr, 6);
}