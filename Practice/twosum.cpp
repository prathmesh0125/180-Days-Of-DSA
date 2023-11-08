#include <iostream>
#include<algorithm>
using namespace std;

void TwoSum(int arr[], int n, int sum)
{
    sort(arr,arr+n);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] + arr[j] == sum)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            break;

        }
        else if(arr[i]+arr[j]<sum){
            i++;
        }
        else{
            j--;
        }
    }
}
int main()
{
    int arr[5] = {5, 1, 3, 4, 2};
    TwoSum(arr, 5, 8);
}