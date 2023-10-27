#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
    int rem = 0;
    int ans = 0;
    int mul = 1;
    while (num > 0)
    {
        rem = num % 8;
        ans = rem * mul + ans;
        num /= 10;
        mul *= 10;
    }
    cout << ans;
}