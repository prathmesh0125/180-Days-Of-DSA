#include <iostream>
#include<exception>
using namespace std;
int main()
{
  try
  {
    int *p = new int[100000000];
    cout << "Memorey allocation is succefull" << endl;
    delete[] p;
  }
  catch (const exception &e)
  {
    cout<<"exception occured due to line 9:"<<e.what()<<endl;
  }
}