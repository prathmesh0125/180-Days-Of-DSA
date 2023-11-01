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
    //    transpose matrix
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // reverse each row
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = n - 1;
        while (start < end)
        {
            swap(arr[start++][i], arr[end--][i]);
        }
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    RotateMatrix(arr, 3);
    
    print(arr, 3, 3);
}