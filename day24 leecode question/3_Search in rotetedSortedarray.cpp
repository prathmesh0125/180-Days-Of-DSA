#include <iostream>
using namespace std;
int Search(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] >= arr[0])
        {
            if (arr[start] <= key && arr[mid] >= key)
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
            if (arr[mid] <= key && arr[end] >= key)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {4, 5, 0, 1, 2, 3};
    int key;
    cout << "Enter key" << endl;
    cin >> key;
    cout << "element index " << Search(arr, 6, key) << endl;
}