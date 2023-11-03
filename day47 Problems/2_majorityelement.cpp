#include <iostream>
using namespace std;
// 1 st aprroach
// int MajjorityEle(int arr[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cnt++;
//             }
//         }
//         if(cnt>n/2){
//             ans=arr[i];
//         }
//     }
//     return ans;
// }
// 2.approach
int MajjorityEle(int arr[], int n)
{
    int candidate,cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            candidate=arr[i];
        }
        else{
            if(candidate==arr[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count>n/2){
        return candidate;
    }
    else{
        return -1;
    }
}

int main()
{
    int arr[11] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    cout << "Majority element " << MajjorityEle(arr, 11);
}