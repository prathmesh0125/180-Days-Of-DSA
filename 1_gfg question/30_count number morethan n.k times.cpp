#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int Countofnumber(int arr[], int n, int k)
{
  int occurance = (n / k) + 1;
  int minval = INT8_MAX;
  int Maxval = INT8_MAX;
  int ans=0;
  for (int i = 0; i < n; i++)
  {
    minval = min(arr[i], minval);
    Maxval = max(arr[i], Maxval);
  }
  int range = (Maxval - minval) + 1;
  vector<int> freq(range, 0);
  for (int i = 0; i < n; i++)
  {
    freq[arr[i]-minval]++;
  }
  for(int i=0;i<n;i++){
    if(freq[i]>=occurance){
      ans++;
    }
  }
  return ans;
}

int main()
{
  // int arr[8] = {3, 1, 2, 2, 1, 2, 3, 3};
  int arr[4] = {2,3,3,2};
  int k = 3;
  cout << Countofnumber(arr, 4, k);
}