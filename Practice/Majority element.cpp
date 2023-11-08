#include<iostream>
using namespace std;

int majorityElement (int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
            return arr[i];
        }
    }
    return -1;
}
// int majorityElement(int arr[],int n){
//     int candidta,count=0;
//     for(int i=0;i<n;i++){
//         if(count==0){
//             count=1;
//             candidta=arr[i];
//         }
//         else{
//             if(candidta==arr[i]){
//                 count++;
//             }
//             else{
//                 count--;
//             }
//         }
//     }
//     // return candidta;
//     int cnt=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==candidta){
//             cnt++;
//         }
        
//     }
//     if(cnt>n/2){
//     return candidta;

//     }
//     else{
//     return -1;
//     }
     
// }


int main(){
    int arr[11]={3,2,2,2,1,3,3,2,2,3,2};
    cout<<majorityElement(arr,11);
}