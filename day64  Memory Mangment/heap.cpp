#include<iostream>
using namespace std;
int main(){
  // heap memorey allocation
  int *ptr=new int;
  *ptr=5;
  // cout<<*ptr;
  float *pt=new float;
  *pt=3.4;
  // cout<<*pt;

  // heap array memory allocaion
  int n;
  cout<<"enter number"<<endl;
  cin>>n;
  
  int *p=new int[n];
  // value
  for(int i=0;i<n;i++){
    p[i]=i+1;
  }
  for(int i=0;i<n;i++){
cout<<p[i]<<endl;
  }

  // realese memory
  delete ptr;
  delete pt;
  delete[] p;

}