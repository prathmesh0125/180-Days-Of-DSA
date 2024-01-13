#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream fout;
// open file
fout.open("file.txt");
// write file
fout<<"hello world";
fout.close();
}