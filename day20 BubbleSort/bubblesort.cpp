#include <iostream>
using namespace std;
void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int n)
{
    bool swape=false;
    for (int i = 0; i < n; i++)
    {
    // print(arr, n);
    // cout<<endl;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swape=true;
                
            }
        }
            if(swape==false){
                // cout<<" Array is already sorted"<<endl;
                break;
            }
    }
}
  
int main()
{
    // int arr[5] = {7, 4, 8, 5, 3};
    int arr[100];
    int n;
    cout << "enter Size" << endl;
    ;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    print(arr, n);
}