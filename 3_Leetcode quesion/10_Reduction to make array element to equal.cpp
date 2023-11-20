#include <iostream>
using namespace std;
#include <algorithm>
int Reduction(int arr[], int n)
{
    sort(arr, arr + n);
    int prev = arr[n - 1];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != prev)
        {
            prev = arr[i];
            ans += (n - i - 1);
        }
    }
    return ans;
}
int main()
{
    int arr[3] = {1, 5, 3};
    cout << Reduction(arr, 3);
}