#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;
    int i = 1;
    int n = 10;
    while (i <= n)
    {
        if (i % 4 == 0)
        {
            continue;
        }
        cout << i << " ";
        i++;
    }
}