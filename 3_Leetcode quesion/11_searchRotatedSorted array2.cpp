#include <iostream>
using namespace std;
int SearchII(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            return true;
        }
        if (arr[start] == arr[mid] && arr[mid] == arr[end])
        {
            start++;
            end--;
            continue;
        }
        else if (arr[mid] >= arr[start])
        {
            if (arr[start] <= k && k >= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= k && arr[end] >= k)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[7] = {3, 4, 1, 2, 3, 3, 3};
    int k = 1;
    cout << SearchII(arr, 7, k);
}