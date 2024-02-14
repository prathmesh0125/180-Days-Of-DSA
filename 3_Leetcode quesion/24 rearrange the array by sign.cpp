#include <iostream>
#include <vector>
using namespace std;
vector<int> Rearange(vector<int> &nums)
{
  vector<int> result(nums.size(), 0);
  int pos = 0, neg = 1;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] > 0)
    {
      result[pos] = nums[i];
      pos += 2;
    }
    else
    {
      result[neg] = nums[i];
      neg += 2;
    }
  }
  return result;
}
void print(vector<int> &nums)
{
  for (int i = 0; i < nums.size(); i++)
  {
    cout << nums[i] << " ";
  }
}
int main()
{
  vector<int> nums = {3, 1, -2, -5, 2, -4};
  vector<int> ans = Rearange(nums);
  print(ans);
}