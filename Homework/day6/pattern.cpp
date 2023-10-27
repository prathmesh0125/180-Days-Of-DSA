#include <iostream>.
using namespace std;

int main()
{
    cout << "first pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << 4 << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "second pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
    cout << endl;
    cout << "Third pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout<<j*j*j<<" ";
        }
        cout<<endl;
    }
    cout << endl;
    cout << "fourth pattern" << endl;
    for (int i = 1; i <= 5; i++)
    {
        char ch='F';
        for (int j = 1; j <= 6; j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}