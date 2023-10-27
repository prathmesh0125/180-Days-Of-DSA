#include <iostream>
using namespace std;

int add(int n)
{
    while (n > 9)
    {
        int ans = 0;
        int rem = 0;
        while (n > 0)
        {

            rem = n % 10;
            ans += rem;
            n /= 10;
        }
        n = ans;
    }
    return n;
}
int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    cout << add(n);
}