#include<iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("open.txt");
  fout<<"hello india"<<endl;
  fout<<"hello world"<<endl;
  fout<<"Ram ram bhai "<<endl;
  fout.close();

  ifstream fin;
  fin.open("z1.txt");

  string line;
  while(getline(fin,line)){
    cout<<line<<endl;
  }
  fin.close();

}