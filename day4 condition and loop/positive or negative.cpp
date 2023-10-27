#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number" << endl;
    cin >> num;
    if (num > 0)
    {
        cout << "number is Positive" << endl;
    }
    else if (num < 0)
    {
        cout << "number is Negative" << endl;
    }
    else
    {
        cout << "number is Zero" << endl;
    }
}