#include <iostream>
using namespace std;
int missingelement(int arr[], int n)
{
    int first = arr[0];
    int last = arr[n-1];
    int diff = (last - first) / n;
    for (int i = 0; i < n; i++)
    {
        int add = arr[i] + diff;
        if (add != arr[i + 1])
        {
            return add;
        }
    }
    return -1;
}
int main()
{
    int arr[6] = {1, 6, 11, 16, 21, 31};
    cout << missingelement(arr, 6);
}