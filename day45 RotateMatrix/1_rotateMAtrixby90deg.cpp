#include <iostream>
using namespace std;


// brute force approach
void print(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

void RotateMatrix(int arr[][3], int n)
{
    int temp[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[j][n - 1 - i] = arr[i][j];
        }
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = temp[i][j];
        }
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    RotateMatrix(arr, 3);
    print(arr, 3, 3);
}