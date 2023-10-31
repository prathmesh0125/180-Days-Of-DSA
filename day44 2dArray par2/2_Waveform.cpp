#include <iostream>
using namespace std;

// time complexity O(row*col) reson we travse all element in matrix
void WaveForm(int arr[][4], int row, int col)
{
    for (int c = 0; c < col; c++)
    {
        if (c % 2 == 0)
        {
            for (int r = 0; r < row; r++)
            {
                cout << arr[r][c]<<" ";
            }
            cout << endl;
        }
        else
        {
            for (int r = row - 1; r >= 0; r--)
            {
                cout << arr[r][c]<<" ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[4][4] = {3, 6, 4, 2, 7, 8, 11, 5, 9, 3, 12, 1, 1, 8, 5, 9};
    WaveForm(arr, 4, 4);
}