#include<iostream>
using namespace std;
int main(){
  // Array create karna hai,jo store karega address
  int n,m;//n=rows,m=cols
  cin>>n>>m;

  int **ptr=new int*[n];//created one day array
  // create multiple array and store in ptr
  for(int i=0;i<n;i++){
    ptr[i]=new int[m];
  }
  // take input from array
  cout<<"enter values"<<endl;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      // cin>>ptr[i][j];
      cin>>*(*(ptr+i)+j);
    }
  }
  // print values
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      // cout<<ptr[i][j]<<" ";
      cout<<*(*(ptr+i)+j)<<" ";
    }
  }

  // delete memorey
  for(int i=0;i<n;i++){
    delete[] ptr[i];
  }
  delete[] ptr;


}