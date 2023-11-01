#include <iostream>
using namespace std;

// brute force approach
void print(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

void RotateMatrix(int arr[][4], int n)
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
            swap(arr[i][start++], arr[i][end--]);
        }
    }
}
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,13,14,15,16};
    int k;
    cout << "enter k time" << endl;
    cin >> k;
    k = k % 4;
    for(int i=0;i<k;i++){

        RotateMatrix(arr, 4);
    }
        
    
    print(arr, 4, 4);
}