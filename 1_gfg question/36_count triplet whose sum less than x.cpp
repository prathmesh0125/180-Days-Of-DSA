#include<iostream>
#include<algorithm>
using namespace std;

int CountTriplet(int arr[],int n,int sum){
sort(arr,arr+n);
int count=0;
for(int i=0;i<n-2;i++){
  int j=i+1;
  int k=n-1;
  while(j<k){
    if(arr[i]+arr[j]+arr[k]<sum){
       count+=(k-j);
       j++;
    }
    else{
      k--;
    }
  }

}
return count;
}
int main(){
  int N = 4, sum = 2;
  int arr[] = {-2, 0, 1, 3};
  cout<<CountTriplet(arr,N,sum);
}