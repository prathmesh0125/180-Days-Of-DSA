#include <iostream>
using namespace std;
int SqrtX(int n)
{
    int ans = 0;
    int start = 1;
    int end = n;
   long long int mid = start + (end-start) / 2;
    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

      mid = start + (end-start) / 2;
    }
        return ans;
}
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    cout << SqrtX(n);
}