#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    if (n < 2)
    {
        cout << "not prime" << endl;
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "not prime" << endl;
                return 0;
            }
        }
        cout << " prime" << endl;
        return 0;
    }
}