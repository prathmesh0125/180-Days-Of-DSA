#include <iostream>
using namespace std;
int main()
{
    // 1 approach
    for (char c = 'A'; c <= 'Z'; c++)
    {
        cout << c << " ";
    }
    cout << endl;
    // 2 approcha
    for (int i = 65; i <= 90; i++)
    {
        char ch = i;
        cout << ch << " ";
    }
}