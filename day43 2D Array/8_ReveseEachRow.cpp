#include <iostream>
using namespace std;
void print(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}
void Reverse(int arr[][2], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
       int start=0;
       int end=col-1;
       while (start<end)
       {
       swap(arr[i][start++],arr[i][end--]);
       }
       

    }
}
int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    Reverse(arr, 2, 2);
    print(arr, 2, 2);
}