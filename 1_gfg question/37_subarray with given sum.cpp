#include <iostream>
#include<utility>
#include<vector>
using namespace std;
pair<int,int> subarray(int arr[], int n, int sum)
{
  int start = 0;
  int end = 0;
  int ans = 0;
  while (end < n)
  {
    ans += arr[end];
    while (ans > sum && start < end)
    {
      ans -= arr[start];
      start++;
    }
    if (ans == sum)
    {
        return make_pair(start + 1, end + 1);
    }
    end++;
  }
  return make_pair(-1,-1);
}

int main()
{
  int arr[5] = {1, 2, 3, 7, 5};
  int sum = 12;
  auto result=subarray(arr, 5, sum);
  cout<<result.first<<" "<<result.second<<endl;

}