#include<iostream>
using namespace std;
#include <unordered_set>

// brute force solution
// bool subarrayWith0sum(int arr[],int n){
//   for(int i=0;i<n;i++){
//     int sum=0;
//     for(int j=i;j<n;j++){
//       sum+=arr[j];
//       if(sum==0){
//         return true;
//       }
//     }
//   }
//   return false;
// }

// optimal solution
bool subarrayWith0sum(int arr[],int n){
  unordered_set<int>prefix;
  int sum=0;
  for(int i=0;i<n;i++){
    sum +=arr[i];
    if(sum==0 || prefix.count(sum)>0){
      return true;
    }
    prefix.insert(sum);
    
  }
  return false;
}
int main(){
  int arr[5]={4,2,-3,1,6};
  cout<<subarrayWith0sum(arr,5);
}