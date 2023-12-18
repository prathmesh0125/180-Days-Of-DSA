#include<iostream>
using namespace std;
void print(int arr[],int n){
  for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
  }
}

int partition(int arr[],int start,int end){
  int pos=start;
  for(int i=start;i<=end;i++){
    if(arr[i]<=arr[end]){
      swap(arr[i],arr[pos]);
      pos++;
    }
  }
  return pos-1;
}

void quickSort(int arr[],int start,int end){
  if(start>=end){
    return;
  }

  int pivot=partition(arr,start,end);
  // left
  quickSort(arr,start,pivot-1);
  // right;
  quickSort(arr,pivot,end);

}
int main(){
int arr[5]={6,5,4,3,2};
quickSort(arr,0,4);
print(arr,5);
}