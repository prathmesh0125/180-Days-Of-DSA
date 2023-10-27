#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number" << endl;
    cin >> num;
     long long rem = 0;
    long long ans = 0;   
     long long mul = 1;
    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        ans = rem * mul + ans;
        mul *= 10;
    }
    cout << ans;
}