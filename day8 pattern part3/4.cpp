#include <iostream>
using namespace std;
/*
        A
      A B
    A B C
  A B C D
A B C D E

*/
int main()
{
    int n;
    cout << "Enter number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A';
        for (int k = 1; k <= i; k++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
    }

    // 2 way
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (char ch = 'A'; ch <= 'A' + i - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}