#include <iostream>
using namespace std;
int main()
{
    int number = 5;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number - i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    cout << endl;

    int nu = 5;
    for (int i = 1; i <= nu; i++)
    {
        for (int j = 1; j <= nu - i; j++)
        {
            cout << "  ";
        }
        char ch = 'A' + i - 1;
        for (int k = 1; k <= i; k++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;

    int no = 5;
    for (int i = 1; i <= no; i++)
    {

        for (int j = 1; j <= no - i; j++)
        {
            cout <<"  ";
        }
        for (int k = 5; k >=5-i+1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }
    cout << endl;

    int n = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        char ch = 'E';
        for (int k = 1; k <= i; k++)
        {
            cout << ch-- << " ";
        }
        cout << endl;
    }
}