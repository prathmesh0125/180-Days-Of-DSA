#include <iostream>
using namespace std;

int main()
{
    long long a = 0;
    long long b = 1;
    long long ans = 0;

    int n;
    cout << "Enter number for find fibbonacchi serise" << endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout << ans << " ";
        a = b;
        b = ans;
        ans = a + b;
    }
}