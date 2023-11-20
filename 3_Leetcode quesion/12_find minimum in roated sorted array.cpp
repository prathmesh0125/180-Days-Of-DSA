#include <iostream>
using namespace std;
int Minimum(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int arr[5] = {4, 5, 1, 2, 3};
    cout << Minimum(arr, 5);
}