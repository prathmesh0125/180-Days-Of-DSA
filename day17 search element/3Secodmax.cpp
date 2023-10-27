#include <iostream>
using namespace std;
int SecondeMax(int arr[], int n)
{
    int large = arr[0];
    int seclarge = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            seclarge=large;
            large=arr[i];
        }
        else if(arr[i]<large && arr[i]>seclarge){
            seclarge=arr[i];
        }
    }
  return seclarge;
}
int main()
{
    int arr[7] = {2, 6, 4, 3, 8, 5, 1};
    cout << SecondeMax(arr, 7);
}