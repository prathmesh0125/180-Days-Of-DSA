#include <iostream>
using namespace std;

// brute force O(n)
// int FindIndex(int arr[],int n,int k){
// for(int i=0;i<n;i++){
//     if(arr[i]>=k){
//         return i;
//     }
// }
// return -1;
// }

// optimal solution O(logn)
int FindIndex(int arr[], int n, int k)
{
    int start = 0;
    int end = n - 1;
    int index = n;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return mid;
        }
        else if (arr[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            index = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}
int main()
{
    int arr[8] = {1, 4, 6, 8, 10, 14, 16, 18};
    int key;
    cout << "Enter number" << endl;
    cin >> key;
    cout << FindIndex(arr, 8, key);
}