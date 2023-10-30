#include <iostream>
#include <algorithm>
using namespace std;
bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int left = 0;
    int right = n - 1;

    while (left < right)
    {

        if (arr[left] + arr[right] == x)
        {
            return true;
        }
        else if (arr[left] + arr[right] < x)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return false;
}

int main()
{
    int arr[5] = {1, 2, 4, 3, 6};
    int x = 10;
    cout << hasArrayTwoCandidates(arr, 5, x);
}