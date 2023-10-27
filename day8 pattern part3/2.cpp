#include <iostream>
using namespace std;
/*
* * * * 1
* * * 2 2
* * 3 3 3
* 4 4 4 4
5 5 5 5 5
*/
int main()
{
    // int n = 5;
    int n;
    cout << " Enter thr number " << endl;
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout<<endl;

    /*  1
      2 2
    3 3 3
  4 4 4 4
5 5 5 5 5
    */
    int nu = 6;

    for (int i = 1; i <= nu; i++)
    {
        // space print
        for (int j = 1; j <= nu - i; j++)
        {
            cout << "  ";
        }
        // number print
        for (int k = 1; k <= i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}