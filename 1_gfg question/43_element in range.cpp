#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

string ElementinRange(int arr[], int n, int a, int b)
{
  unordered_set<int> uniqueElements;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= a && arr[i] <= b)
    {
      uniqueElements.insert(arr[i]);
      if (uniqueElements.size() == b - a + 1)
      {
        return "yes";
      }
    }
  }
  return "No";
}
int main()
{
  int N = 7, A = 2, B = 5;
  int arr[] = {1, 4, 5, 2, 7, 8, 3};
  cout << ElementinRange(arr, N, A, B);
}