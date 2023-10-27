#include <iostream>
using namespace std;
int power(int n)
{
    int base = 2;
    int power = 1;
    for (int i = 1; i <= 31; i++)
    {
        power = power * base;
        if (power == n)
        {
            return true;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "enter number" << endl;
    cin >> n;
    if (n < 1)
    {
        return 0;
    }
    else
    {
        cout << power(n);
    }
}