#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Toh(int n, int source, int help, int dest)
{
  if (n == 1)
  {
    cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl;
    return;
  }
  Toh(n - 1, source, dest, help);
  cout << "move disk " << n << " from rod " << source << " to rod " << dest << endl;
  Toh(n - 1, help, source, dest);
}

int main()
{
  int n = 3;
  Toh(n, 1, 2, 3);
}