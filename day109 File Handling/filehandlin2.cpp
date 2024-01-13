#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  // file open
  ifstream fin;
  fin.open("open.txt");
  // read file
  char c;
  // fin>>c;//this is not read space
  c = fin.get();//this will read space
  while (!fin.eof())
  {
    cout << c;
    // fin >> c;
  c = fin.get();

  }
  fin.close();
}