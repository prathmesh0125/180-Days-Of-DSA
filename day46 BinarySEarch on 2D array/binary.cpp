#include <iostream>
using namespace std;
// 1 approach
// int Search(int arr[][3],int row,int col,int x){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             if(arr[i][j]==x){
//                 return 1;
//             }
//         }
//     }
//     return -1;
// }
// 2 second approach

int Search(int arr[][3], int row, int col, int x)
{
    int start = 0, end = row * col - 1;
    while (start <= end)

    {
        int mid = (start + end) / 2;
        int row_index = mid / col;
        int col_index = mid % col;

        if (arr[row_index][col_index] == x)
        {
            return 1;
        }
        else if (arr[row_index][col_index] < x)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return 0;
}

int main()
{
    int arr[2][3] = {1, 2, 3, 4, 5, 6};
    int x = 6;
    cout << Search(arr, 2, 3, x);
}