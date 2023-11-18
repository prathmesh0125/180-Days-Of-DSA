#include <iostream>
using namespace std;
int Search(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] >= arr[start])
        {
            if (arr[start] <= k && arr[mid] >= k)
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
    int arr[10] = {10, 11, 12, 14, 15, 0, 1, 2, 3, 4};
    int k = 10;
    cout << Search(arr, 10, k);
}