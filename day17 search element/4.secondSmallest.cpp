#include <iostream>
using namespace std;
int SecondeSmall(int arr[], int n)
{
    int small = arr[0];
    int secsmall = -1;
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            secsmall=small;
            small=arr[i];
        }
        else if(arr[i]>small && arr[i]<secsmall){
            secsmall=arr[i];
        }
    }
  return secsmall;
}
int main()
{
    int arr[7] = {2, 6, 4, 3, 8, 5, 1};
    cout << SecondeSmall(arr, 7);
}