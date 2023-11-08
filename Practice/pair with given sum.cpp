#include <iostream>
using namespace std;
void PairDiff(int arr[], int n, int diff)
{
    int i = 0;
    int j = i + 1;
    while (i < n && j < n)
    {
        if (arr[j] - arr[i] == diff)
        {
            cout << arr[i] << " " << arr[j] << endl;
            break;
        }
        else if (arr[j] - arr[i] < diff)
        {
            j++;
        }
        else if (arr[j] - arr[i] > diff){
            i++;
        }
    }
}
int main()
{
    int arr[6] = {2, 3, 5, 10, 50, 80};
    PairDiff(arr, 6, 45);
}