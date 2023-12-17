#include <iostream>
using namespace std;
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}
int removeduplict(int arr[],int n){
  int i=0;
  for(int j=1;j<n;j++){
    if(arr[i]!=arr[j]){
      arr[i+1]=arr[j];
      i++;
    }
  }
  return i+1;
}
int main()
{
  int arr[5] = {1, 2, 2, 3, 3};
  int n = removeduplict(arr, 5);
  print(arr, n);
}