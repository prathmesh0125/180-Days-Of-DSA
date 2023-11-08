#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
// void SegreGate(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         if(arr[i]==0){
//             i++;
//         }
//         else if(arr[j]==1){
//            j--;
//         }
//         else if(arr[i]>arr[j]){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//     }
// }
void SegreGate(int arr[], int n)
{
    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[j] != 1)
        {
            swap(arr[i++], arr[j]);
        }
        j++;
    }
}
int main()
{
    int arr[5] = {0, 1, 0, 1, 0};
    SegreGate(arr, 5);
    print(arr, 5);
}