#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int divideORnot(vector<int>&arr)

{
    int n=arr.size();
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    { 
        totalSum += arr[i];
    }
    int prefix = 0; 
    for (int i = 0; i < n-1; i++)
    {
        prefix += arr[i];
        int ans = totalSum - prefix;
        if (ans == prefix)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    vector<int>v = {2, 4, 6, 2, 1, 5, 8, 2};
    cout << divideORnot(v);
}