#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
int main(){
  vector<int>v(5);
  cout<<"Enter the input"<<endl;
  for(int i=0;i<5;i++){
    cin>>v[i];
  }

  // open file 
  ofstream fout;
  fout.open("zero.txt");
  fout<<"orignal data"<<endl;

  for(int i=0;i<5;i++){
    fout<<v[i]<<" ";
  }
  sort(v.begin(),v.end());
  fout<<endl<<"sorted data"<<endl;

  for(int i=0;i<5;i++){
    fout<<v[i]<<" ";
  }
}