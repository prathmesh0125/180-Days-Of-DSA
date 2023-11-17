#include <iostream>
using namespace std;
#include <algorithm>

int FindMinium(int arr[], int n)
{
    sort(arr, arr + n);
    int start = 0;
    int end = n - 1;
    int ans = 0;
    while (start < end)
    {
        ans = max(ans, arr[start] + arr[end]);
        start++;
        end--;
    }
    return ans;
}
int main()
{
    int arr[6] = {3, 5, 4, 2, 4, 6};
    cout << FindMinium(arr, 6);
}