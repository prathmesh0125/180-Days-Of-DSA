#include <iostream>
using namespace std;
// int SqrtOfX(int n)
// {
//   if (n < 1)
//   {
//     return 0;
//   }
//   int ans = -1;
//   for (int i = 0; i <= n/2; i++)
//   {
//     if (i * i <= n)
//     {
//       ans = i;
//     }
//     else
//     {
//       break;
//     }
//   }
//   return ans;
// }

int SqrtOfX(int n)
{
  long long int start = 1;
  long long int end = n;
  long long int ans = 0;
  while (start <= end)
  {
    long long int mid = (start + end) / 2;
    if (mid * mid <= n)
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}
int main()
{
  int n;
  cout << "Enter a number" << endl;
  cin >> n;
  cout << SqrtOfX(n);
}