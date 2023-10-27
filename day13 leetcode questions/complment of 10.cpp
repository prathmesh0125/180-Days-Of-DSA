#include <iostream>
using namespace std;

int complement(int n)
{
    int rem = 0;
    int ans = 0;
    int mul = 1;
    if (n == 0)
    {
        return 1;
    }
    while (n != 0)
    {
        rem = n % 2;
        rem = rem ^ 1;
        ans = rem * mul + ans;
        mul *= 2;
        n /= 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    cout << complement(n);
}