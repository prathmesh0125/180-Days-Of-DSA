#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = 0;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 4, 4, 4, 4, 4};
    cout << "Firstoccurance  " << firstOcc(arr, 6, 4) << endl;
    cout << "Lastoccurance  " << lastOcc(arr, 6, 4) << endl;
    cout<<"Total occurance "<<( lastOcc(arr, 6, 4)-firstOcc(arr, 6, 4))+1;
}