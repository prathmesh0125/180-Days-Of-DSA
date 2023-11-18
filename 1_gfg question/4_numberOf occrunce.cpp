#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int LastOcc(int arr[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == x)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    // int cnt=0;
    // for(int i=0;i<=n;i++)
    //{
    //     if(arr[i]==x){
    //         cnt++;
    //     }
    // }
    // return cnt;
    int arr[7]={1,1,4,4,4,4,3};
    int n=7;
    int x=4;
       
    if (firstOcc(arr, n, x) == -1)
    {
        cout<<"not found";
    }
    int ans = LastOcc(arr, n, x) - firstOcc(arr, n, x) + 1;
    cout<< ans;
}