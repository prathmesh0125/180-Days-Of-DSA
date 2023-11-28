#include <iostream>
using namespace std;
long long int nthPostion(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return nthPostion(n / 2) * 2;
}
int main()
{
  int n = 9;
  cout << nthPostion(n);
}