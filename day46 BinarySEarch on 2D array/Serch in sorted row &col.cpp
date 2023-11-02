#include <iostream>
using namespace std;
bool Search(int arr[][3], int row, int col, int x)
{
    int i = 0;
    int j = col - 1;
    while (i < row && j >= 0)
    {
        if (arr[i][j] == x)
        {
            return 1;
        }
        else if (arr[i][j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}
int main()
{
    int arr[3][3] = {3, 30, 38, 36, 43, 60, 40, 51, 69};
    int x = 1;
    cout << Search(arr, 3, 3, x);
}