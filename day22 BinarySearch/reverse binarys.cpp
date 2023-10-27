#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid =  start+(end-start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
          end = mid - 1;
        }
        else
        {
            start=mid+1;
        }
       mid =  start+(end-start) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {30,28,20,16,4};
    int key;
    cout << "Enter key" << endl;
    cin >> key;
    cout << BinarySearch(arr, 5, key);
}