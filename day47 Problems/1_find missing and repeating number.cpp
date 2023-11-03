#include <iostream>
using namespace std;
void Repeat(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
    int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                cnt++;
            }
            if(cnt>1){
                cout<<"missing Element "<< arr[i]<<endl; 
                break;
            }
        }
    }
   
}
void Missing(int arr[],int n){
      for (int i = 1; i <= n; i++) {
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (arr[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Missing Element: " << i << endl;
        }
    }
}
int main()
{
    int arr[7] = {4, 3, 2, 1, 2, 7, 6};
    Repeat(arr, 7);
    Missing(arr, 7);
    
}