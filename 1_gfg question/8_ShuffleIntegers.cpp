#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void shuffleArray(int arr[], int n)
{
  vector<int> ans;
  int i = 0;
  int j = n / 2;
  for (int k = 0; k < n / 2; k++)
  {
    ans.push_back(arr[i++]);
    ans.push_back(arr[j++]);
  }
  int k = 0;
  for (auto it : ans)
    arr[k++] = it;
}
int main()
{
  int arr[4] = {1, 2, 9, 15};
  shuffleArray(arr, 4);
  for(int i=0;i<4;i++){
    cout<<arr[i]<<" ";
  }
}