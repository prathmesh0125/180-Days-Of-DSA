#include <iostream>
using namespace std;


int Search(int arr[][3], int row, int col, int x)
{
    int start = 0, end = row * col - 1;
        int ans=0;
    while (start <= end)

    {
        int mid = (start + end) / 2;
        int row_index = mid / col;
        int col_index = mid % col;

        if (arr[row_index][col_index] == x)
        {
           ans=arr[row_index][col_index];
           break;
        }
        else if (arr[row_index][col_index] >x)
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
    int arr[2][3] = {6,5,4,3,2,1};
    int x = 6;
    cout << Search(arr, 2, 3, x);
}