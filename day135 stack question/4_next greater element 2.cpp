#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
  // Create a vector to store the result initialized with -1
  vector<long long> ans(n, -1);

  // Create a stack to store the indices of elements from the input array
  stack<int> st;

  for (int i = 0; i < 2 * n - 1; i++)
  {
  
    while (!st.empty() && arr[st.top()] < arr[i % n])
    {
      ans[st.top()] = arr[i % n];
      st.pop();
    }
    st.push(i % n);
  }

  return ans;
}

int main()
{
  // Test the nextLargerElement function
  vector<long long> arr = {6,10,7,4,8,9,4};
  int n = arr.size();

  vector<long long> result = nextLargerElement(arr, n);

  // Output the result
  cout << "Next larger elements: ";
  for (long long num : result)
  {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
